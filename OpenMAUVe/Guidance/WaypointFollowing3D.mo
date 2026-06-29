within OpenMAUVe.Guidance;
model WaypointFollowing3D "Configurable waypoint follower with 3D waypoint switching and horizontal yaw guidance"
  import Modelica.Units.SI;

  parameter Integer n_waypoints = 10 "Number of waypoints";
  parameter SI.Position waypoint_x[n_waypoints] = {0, 100, 100, 120, 120, 140, 140, 160, 160, 0} "Waypoint x coordinates";
  parameter SI.Position waypoint_y[n_waypoints] = {0, 0, -40, -40, 40, 40, -40, -40, 40, 0} "Waypoint y coordinates";
  parameter SI.Position waypoint_z[n_waypoints] = {150, 150, 150, 150, 150, 150, 150, 150, 150, 150} "Waypoint z coordinates";
  parameter SI.Length gamma = 5.0 "3D waypoint reached threshold";
  parameter Real gamma_extended_slowing_down(min = 1.0) = 3.0 "Start reducing speed at this multiplier of gamma";
  parameter Real min_speed_fraction(min = 0.0, max = 1.0) = 0.15 "Minimum nonzero speed fraction while approaching a waypoint";
  parameter SI.Velocity u_ref = 1.2 "Target surge speed";
  parameter SI.Velocity v_ref = 0.0 "Target sway speed";
  parameter Boolean switch_when_past_waypoint = false "Switch if the vehicle has passed the waypoint along the current segment";
  parameter Boolean interrupt_sim_upon_finished = false "Terminate when the last waypoint is reached";

  discrete Integer current_waypoint(start = 1, fixed = true);
  discrete Boolean finished(start = false, fixed = true);
  SI.Length distance_from_next_waypoint;
  SI.Position target_x;
  SI.Position target_y;
  SI.Position target_z;
  SI.Position previous_x;
  SI.Position previous_y;
  SI.Position previous_z;
  Real segment_progress;
  Real segment_length_squared;
  Real segment_progress_limited;
  SI.Length slowdown_distance;
  Real speed_scale;

  Modelica.Blocks.Interfaces.RealInput pos_x annotation(
    Placement(transformation(origin = {-120, 60}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-120, 60}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput pos_y annotation(
    Placement(transformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-120, 0}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealInput pos_z annotation(
    Placement(transformation(origin = {-120, -60}, extent = {{-20, -20}, {20, 20}}), iconTransformation(origin = {-120, -60}, extent = {{-20, -20}, {20, 20}})));
  Modelica.Blocks.Interfaces.RealOutput ref_yaw annotation(
    Placement(transformation(origin = {110, 60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput ref_u annotation(
    Placement(transformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, 0}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput ref_v annotation(
    Placement(transformation(origin = {110, -60}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, -60}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput ref_z annotation(
    Placement(transformation(origin = {110, -100}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, -100}, extent = {{-10, -10}, {10, 10}})));
  Modelica.Blocks.Interfaces.RealOutput speed_scale_out annotation(
    Placement(transformation(origin = {110, -130}, extent = {{-10, -10}, {10, 10}}), iconTransformation(origin = {110, -130}, extent = {{-10, -10}, {10, 10}})));

algorithm
  target_x := waypoint_x[current_waypoint];
  target_y := waypoint_y[current_waypoint];
  target_z := waypoint_z[current_waypoint];
  if current_waypoint > 1 then
    previous_x := waypoint_x[current_waypoint - 1];
    previous_y := waypoint_y[current_waypoint - 1];
    previous_z := waypoint_z[current_waypoint - 1];
  else
    previous_x := target_x;
    previous_y := target_y;
    previous_z := target_z;
  end if;
  distance_from_next_waypoint := sqrt((target_x - pos_x)^2 + (target_y - pos_y)^2 + (target_z - pos_z)^2);
  segment_length_squared := (target_x - previous_x)^2 + (target_y - previous_y)^2 + (target_z - previous_z)^2;
  segment_progress := if segment_length_squared > 0 then ((pos_x - previous_x)*(target_x - previous_x) + (pos_y - previous_y)*(target_y - previous_y) + (pos_z - previous_z)*(target_z - previous_z))/segment_length_squared else 0.0;

  if not finished and (distance_from_next_waypoint < gamma or switch_when_past_waypoint and current_waypoint > 1 and segment_progress >= 1.0) then
    if current_waypoint < n_waypoints then
      current_waypoint := current_waypoint + 1;
      target_x := waypoint_x[current_waypoint];
      target_y := waypoint_y[current_waypoint];
      target_z := waypoint_z[current_waypoint];
      previous_x := waypoint_x[current_waypoint - 1];
      previous_y := waypoint_y[current_waypoint - 1];
      previous_z := waypoint_z[current_waypoint - 1];
      distance_from_next_waypoint := sqrt((target_x - pos_x)^2 + (target_y - pos_y)^2 + (target_z - pos_z)^2);
      segment_length_squared := (target_x - previous_x)^2 + (target_y - previous_y)^2 + (target_z - previous_z)^2;
      segment_progress := if segment_length_squared > 0 then ((pos_x - previous_x)*(target_x - previous_x) + (pos_y - previous_y)*(target_y - previous_y) + (pos_z - previous_z)*(target_z - previous_z))/segment_length_squared else 0.0;
    else
      finished := true;
    end if;
  end if;

  segment_progress_limited := max(0.0, min(1.0, segment_progress));
  slowdown_distance := max(gamma, gamma_extended_slowing_down*gamma);
  speed_scale := if finished then 0.0 else if slowdown_distance > gamma and distance_from_next_waypoint < slowdown_distance then max(min_speed_fraction, (distance_from_next_waypoint - gamma)/(slowdown_distance - gamma)) else 1.0;

  ref_yaw := atan2(target_y - pos_y, target_x - pos_x);
  ref_u := if finished then 0.0 else u_ref*speed_scale;
  ref_v := if finished then 0.0 else v_ref*speed_scale;
  ref_z := if current_waypoint > 1 then previous_z + segment_progress_limited*(target_z - previous_z) else target_z;
  speed_scale_out := speed_scale;

equation
  when finished and interrupt_sim_upon_finished then
    terminate("WaypointFollowing3D completed all waypoints.");
  end when;

annotation(
  Icon(graphics = {Rectangle(extent = {{-90, 70}, {90, -70}}), Text(origin = {8, 2}, extent = {{-52, 18}, {52, -18}}, textString = "3D Waypoints"), Text(origin = {-76, 61}, extent = {{-16, 8}, {16, -8}}, textString = "x"), Text(origin = {-76, 1}, extent = {{-16, 8}, {16, -8}}, textString = "y"), Text(origin = {-76, -59}, extent = {{-16, 8}, {16, -8}}, textString = "z")}));
end WaypointFollowing3D;
