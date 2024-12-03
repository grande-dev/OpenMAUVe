within Glider_Lib.Simulations;

model TestAUV_5d_CEGIS_LMI_monopile "Test the AUV"
  Glider_Lib.Generic_AUV_3d generic_AUV_3d(Y_v = 11.203, Y_vv = 10.114, alpha1 = Modelica.Units.Conversions.from_deg(45.0), alpha2 = Modelica.Units.Conversions.from_deg(-45.0), alpha3 = Modelica.Units.Conversions.from_deg(-45.0), alpha4 = Modelica.Units.Conversions.from_deg(45.0), enableAddedMass = false, euler_0(each displayUnit = "rad") = {0, 0, 0}, rho(displayUnit = "kg/m3"), v_0 = {0.0, 0.0, 0.0}, w_0 = {0.0, 0.0, 0.0}) annotation(
    Placement(transformation(origin = {83.5, 69}, extent = {{-71.5, -67}, {71.5, 67}})));
  Glider_Lib.Faults.FaultInjection_4thrusters faultInjection_4thrusters(efficiency_after_fault = 0)  annotation(
    Placement(visible = true, transformation(origin = {-243.5, 185.5}, extent = {{-27.5, -27.5}, {27.5, 27.5}}, rotation = 0)));
  Modelica.Blocks.Continuous.Integrator yaw_angle_integrator(k = 1)  annotation(
    Placement(visible = true, transformation(origin = {-278, -75}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add(k1 = -1)  annotation(
    Placement(visible = true, transformation(origin = {-317, -76}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ref_x3_x5(k = 0)  annotation(
    Placement(visible = true, transformation(origin = {-318, 61}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = 1)  annotation(
    Placement(visible = true, transformation(origin = {-237, -75}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain1(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-342, -18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Glider_Lib.Guidance.orbit_following_segments orbit_following_segments(gamma = 10.0, u_ref_approach_phase = 0.6, v_ref_orbit = 0.4, radius_hexagon = 17.0, x_hex = 40.0)  annotation(
    Placement(visible = true, transformation(origin = {-437, -2}, extent = {{-25, -25}, {25, 25}}, rotation = 0)));
  Control.StateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI(saturation_limit = 38.0)  annotation(
    Placement(transformation(origin = {-150.5, 48.5}, extent = {{-79.5, -79.5}, {79.5, 79.5}})));
equation
  connect(add.y, yaw_angle_integrator.u) annotation(
    Line(points = {{-306, -76}, {-290, -76}, {-290, -75}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_angle_yaw, add.u2) annotation(
    Line(points = {{157, 19}, {249, 19}, {249, -103}, {-362, -103}, {-362, -82}, {-329, -82}}, color = {0, 0, 127}));

  connect(yaw_angle_integrator.y, gain.u) annotation(
    Line(points = {{-267, -75}, {-249, -75}}, color = {0, 0, 127}));

  connect(orbit_following_segments.ref_yaw, gain1.u) annotation(
    Line(points = {{-410.5, -17.5}, {-355.5, -17.5}, {-355.5, -18}, {-354, -18}}, color = {0, 0, 127}));
  connect(orbit_following_segments.pos_x, generic_AUV_3d.out_pos_x) annotation(
    Line(points = {{-461, 9}, {-491, 9}, {-491, -144}, {326, -144}, {326, 65}, {157, 65}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_pos_y, orbit_following_segments.pos_y) annotation(
    Line(points = {{157, 57}, {312, 57}, {312, -137}, {-480, -137}, {-480, -10}, {-461, -10}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_yaw, add.u1) annotation(
    Line(points = {{-410.5, -17.5}, {-363, -17.5}, {-363, -70}, {-329, -70}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_1, generic_AUV_3d.F1) annotation(
    Line(points = {{-110, 86}, {-83, 86}, {-83, 108}, {11, 108}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_2, generic_AUV_3d.F2) annotation(
    Line(points = {{-110, 70}, {-70, 70}, {-70, 82}, {11, 82}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_3, generic_AUV_3d.F3) annotation(
    Line(points = {{-110, 54}, {-49.5, 54}, {-49.5, 56}, {13, 56}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_4, generic_AUV_3d.F4) annotation(
    Line(points = {{-110, 40}, {-88, 40}, {-88, 29}, {13, 29}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_4, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_4) annotation(
    Line(points = {{-219, 161}, {-119, 161}, {-119, 102}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_3, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_3) annotation(
    Line(points = {{-219, 176}, {-135, 176}, {-135, 102}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_2, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_2) annotation(
    Line(points = {{-219, 194}, {-151, 194}, {-151, 102}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_1, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_1) annotation(
    Line(points = {{-219, 210}, {-168, 210}, {-168, 102}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_u, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_1) annotation(
    Line(points = {{-411, 12}, {-381, 12}, {-381, 97}, {-184, 97}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_v, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_2) annotation(
    Line(points = {{-410, -2}, {-371, -2}, {-371, 87}, {-184, 87}}, color = {0, 0, 127}));
  connect(ref_x3_x5.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_3) annotation(
    Line(points = {{-307, 61}, {-292, 61}, {-292, 76}, {-184, 76}}, color = {0, 0, 127}));
  connect(ref_x3_x5.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_5) annotation(
    Line(points = {{-307, 61}, {-292, 61}, {-292, 58}, {-184, 58}}, color = {0, 0, 127}));
  connect(gain1.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_4) annotation(
    Line(points = {{-331, -18}, {-278, -18}, {-278, 67}, {-184, 67}}, color = {0, 0, 127}));
  connect(gain.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_5) annotation(
    Line(points = {{-226, -75}, {-210, -75}, {-210, -1}, {-184, -1}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_u, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_1) annotation(
    Line(points = {{156, 133}, {284, 133}, {284, -38}, {-264, -38}, {-264, 40}, {-184, 40}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_v, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_2) annotation(
    Line(points = {{156, 124}, {275, 124}, {275, -29}, {-254, -29}, {-254, 30}, {-184, 30}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_ang_vel_r, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_3) annotation(
    Line(points = {{157, 83}, {260, 83}, {260, -21}, {-245, -21}, {-245, 19}, {-184, 19}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_angle_yaw, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_4) annotation(
    Line(points = {{157, 19}, {202, 19}, {202, -13}, {-234, -13}, {-234, 9}, {-184, 9}}, color = {0, 0, 127}));
protected
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_5d_CEGIS_LMI_monopile;