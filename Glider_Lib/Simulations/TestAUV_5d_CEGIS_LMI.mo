within Glider_Lib.Simulations;

model TestAUV_5d_CEGIS_LMI "Test the AUV"
  Glider_Lib.Generic_AUV_3d generic_AUV_3d(Y_v = 11.203, Y_vv = 10.114, alpha1 = Modelica.Units.Conversions.from_deg(45.0), alpha2 = Modelica.Units.Conversions.from_deg(-45.0), alpha3 = Modelica.Units.Conversions.from_deg(-45.0), alpha4 = Modelica.Units.Conversions.from_deg(45.0), enableAddedMass = false, euler_0(each displayUnit = "rad") = {114.592, 0, 0}, rho(displayUnit = "kg/m3"), v_0 = {2.0, 2.0, 0.0}, w_0 = {0.0, 0.0, 2.0}) annotation(
    Placement(visible = true, transformation(origin = {83.5, 70}, extent = {{-71.5, -67}, {71.5, 67}}, rotation = 0)));
  Glider_Lib.Faults.FaultInjection_4thrusters_distance_def faultInjection_4thrusters_distance_def annotation(
    Placement(visible = true, transformation(origin = {-253, 170}, extent = {{-24, -24}, {24, 24}}, rotation = 0)));
  Glider_Lib.Control.StateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI annotation(
    Placement(visible = true, transformation(origin = {-124.5, 51.5}, extent = {{-80.5, -80.5}, {80.5, 80.5}}, rotation = 0)));
  Modelica.Blocks.Sources.Sine ref_x1(f = 0.02) annotation(
    Placement(visible = true, transformation(origin = {-324, 113}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Cosine ref_x2(f = 0.01) annotation(
    Placement(visible = true, transformation(origin = {-323, 80}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x3(height = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-323, 44}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x4(height = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-323, 11}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step ref_x5(height = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-323, -23}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Step integral_yaw(height = 0.0) annotation(
    Placement(visible = true, transformation(origin = {-220, -84}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
equation
  connect(faultInjection_4thrusters_distance_def.pos_x, generic_AUV_3d.out_pos_x) annotation(
    Line(points = {{-277, 181}, {-307, 181}, {-307, 209}, {257, 209}, {257, 66}, {157, 66}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.pos_y, generic_AUV_3d.out_pos_y) annotation(
    Line(points = {{-277, 159}, {-298, 159}, {-298, 200}, {248, 200}, {248, 58}, {157, 58}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.h_1, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_1) annotation(
    Line(points = {{-232, 192}, {-142, 192}, {-142, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.h_2, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_2) annotation(
    Line(points = {{-232, 177}, {-125, 177}, {-125, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.h_3, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_3) annotation(
    Line(points = {{-232, 162}, {-108, 162}, {-108, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters_distance_def.h_4, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_4) annotation(
    Line(points = {{-231, 149}, {-92, 149}, {-92, 106}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_1, generic_AUV_3d.F1) annotation(
    Line(points = {{-84, 89}, {-55, 89}, {-55, 109}, {11, 109}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_2, generic_AUV_3d.F2) annotation(
    Line(points = {{-84, 73}, {-37, 73}, {-37, 83}, {11, 83}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_3, generic_AUV_3d.F3) annotation(
    Line(points = {{-84, 57}, {13, 57}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_4, generic_AUV_3d.F4) annotation(
    Line(points = {{-84, 43}, {-56, 43}, {-56, 30}, {13, 30}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_u, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_1) annotation(
    Line(points = {{156, 134}, {283, 134}, {283, -45}, {-246, -45}, {-246, 42}, {-159, 42}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_v, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_2) annotation(
    Line(points = {{156, 125}, {273, 125}, {273, -35}, {-236, -35}, {-236, 33}, {-158, 33}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_ang_vel_r, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_3) annotation(
    Line(points = {{157, 84}, {263, 84}, {263, -24}, {-227, -24}, {-227, 22}, {-159, 22}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_angle_yaw, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_4) annotation(
    Line(points = {{157, 20}, {253, 20}, {253, -14}, {-217, -14}, {-217, 12}, {-159, 12}}, color = {0, 0, 127}));
  connect(ref_x1.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_1) annotation(
    Line(points = {{-313, 113}, {-251, 113}, {-251, 100}, {-159, 100}}, color = {0, 0, 127}));
  connect(ref_x2.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_2) annotation(
    Line(points = {{-312, 80}, {-251, 80}, {-251, 90}, {-159, 90}}, color = {0, 0, 127}));
  connect(ref_x3.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_3) annotation(
    Line(points = {{-312, 44}, {-294, 44}, {-294, 75}, {-238, 75}, {-238, 80}, {-159, 80}}, color = {0, 0, 127}));
  connect(ref_x4.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_4) annotation(
    Line(points = {{-312, 11}, {-289, 11}, {-289, 70}, {-159, 70}}, color = {0, 0, 127}));
  connect(ref_x5.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_5) annotation(
    Line(points = {{-312, -23}, {-282, -23}, {-282, 61}, {-159, 61}}, color = {0, 0, 127}));
  connect(integral_yaw.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_5) annotation(
    Line(points = {{-209, -84}, {-187, -84}, {-187, 1}, {-159, 1}}, color = {0, 0, 127}));
protected
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_5d_CEGIS_LMI;