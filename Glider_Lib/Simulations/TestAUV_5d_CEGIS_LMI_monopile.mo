within Glider_Lib.Simulations;

model TestAUV_5d_CEGIS_LMI_monopile "Test the AUV"
  Glider_Lib.Generic_AUV_3d generic_AUV_3d(Y_v = 11.203, Y_vv = 10.114, alpha1 = Modelica.Units.Conversions.from_deg(45.0), alpha2 = Modelica.Units.Conversions.from_deg(-45.0), alpha3 = Modelica.Units.Conversions.from_deg(-45.0), alpha4 = Modelica.Units.Conversions.from_deg(45.0), enableAddedMass = false, euler_0(each displayUnit = "rad") = {0, 0, 0}, rho(displayUnit = "kg/m3"), v_0 = {0.0, 0.0, 0.0}, w_0 = {0.0, 0.0, 0.0}) annotation(
    Placement(visible = true, transformation(origin = {83.5, 69}, extent = {{-71.5, -67}, {71.5, 67}}, rotation = 0)));
  Glider_Lib.Faults.FaultInjection_4thrusters faultInjection_4thrusters(efficiency_after_fault = 0.0)  annotation(
    Placement(visible = true, transformation(origin = {-242.5, 184.5}, extent = {{-27.5, -27.5}, {27.5, 27.5}}, rotation = 0)));
  Modelica.Blocks.Continuous.Integrator yaw_angle_integrator(k = 1)  annotation(
    Placement(visible = true, transformation(origin = {-278, -75}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Add add(k1 = -1)  annotation(
    Placement(visible = true, transformation(origin = {-317, -76}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Sources.Constant ref_x3_x5(k = 0)  annotation(
    Placement(visible = true, transformation(origin = {-387, 48}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Glider_Lib.Control.StateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI(saturation_limit = 38.0) annotation(
    Placement(visible = true, transformation(origin = {-131.5, 51.5}, extent = {{-80.5, -80.5}, {80.5, 80.5}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain(k = 1)  annotation(
    Placement(visible = true, transformation(origin = {-237, -75}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Modelica.Blocks.Math.Gain gain1(k = 0) annotation(
    Placement(visible = true, transformation(origin = {-319, -18}, extent = {{-10, -10}, {10, 10}}, rotation = 0)));
  Glider_Lib.Guidance.orbit_following_segments orbit_following_segments(gamma = 2.0, radius_hexagon = 10.0, x_hex = 30.0, y_hex = 30.0)  annotation(
    Placement(transformation(origin = {-411, -5}, extent = {{-25, -25}, {25, 25}})));
equation
  connect(add.y, yaw_angle_integrator.u) annotation(
    Line(points = {{-306, -76}, {-290, -76}, {-290, -75}}, color = {0, 0, 127}));
  connect(ref_x3_x5.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_3) annotation(
    Line(points = {{-376, 48}, {-280, 48}, {-280, 80}, {-166, 80}}, color = {0, 0, 127}));
  connect(ref_x3_x5.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_5) annotation(
    Line(points = {{-376, 48}, {-271, 48}, {-271, 61}, {-166, 61}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_4, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_4) annotation(
    Line(points = {{-218, 160}, {-99, 160}, {-99, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_3, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_3) annotation(
    Line(points = {{-218, 175}, {-115, 175}, {-115, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_2, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_2) annotation(
    Line(points = {{-218, 193}, {-132, 193}, {-132, 106}}, color = {0, 0, 127}));
  connect(faultInjection_4thrusters.h_1, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.h_1) annotation(
    Line(points = {{-218, 209}, {-149, 209}, {-149, 106}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_ang_vel_r, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_3) annotation(
    Line(points = {{157, 83}, {263, 83}, {263, -24}, {-227, -24}, {-227, 22}, {-166, 22}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_v, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_2) annotation(
    Line(points = {{156, 124}, {273, 124}, {273, -35}, {-236, -35}, {-236, 33}, {-165, 33}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_lin_vel_u, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_1) annotation(
    Line(points = {{156, 133}, {283, 133}, {283, -45}, {-246, -45}, {-246, 42}, {-166, 42}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_1, generic_AUV_3d.F1) annotation(
    Line(points = {{-91, 89}, {-57, 89}, {-57, 108}, {11, 108}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_2, generic_AUV_3d.F2) annotation(
    Line(points = {{-91, 73}, {-58, 73}, {-58, 82}, {11, 82}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_3, generic_AUV_3d.F3) annotation(
    Line(points = {{-91, 57}, {13, 57}, {13, 56}}, color = {0, 0, 127}));
  connect(stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.u_4, generic_AUV_3d.F4) annotation(
    Line(points = {{-91, 43}, {-59, 43}, {-59, 29}, {13, 29}}, color = {0, 0, 127}));
  connect(yaw_angle_integrator.y, gain.u) annotation(
    Line(points = {{-267, -75}, {-249, -75}}, color = {0, 0, 127}));
  connect(gain.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_5) annotation(
    Line(points = {{-226, -75}, {-205, -75}, {-205, 1}, {-166, 1}}, color = {0, 0, 127}));
  connect(gain1.y, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_4) annotation(
    Line(points = {{-308, -18}, {-259, -18}, {-259, 70}, {-166, 70}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_yaw, gain1.u) annotation(
    Line(points = {{-386, -18}, {-331, -18}}, color = {0, 0, 127}));
  connect(orbit_following_segments.pos_x, generic_AUV_3d.out_pos_x) annotation(
    Line(points = {{-435, 6}, {-462, 6}, {-462, -143}, {326, -143}, {326, 65}, {157, 65}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_pos_y, orbit_following_segments.pos_y) annotation(
    Line(points = {{157, 57}, {312, 57}, {312, -139}, {-453, -139}, {-453, -13}, {-435, -13}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_yaw, add.u1) annotation(
    Line(points = {{-386, -18}, {-363, -18}, {-363, -70}, {-329, -70}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_u, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_1) annotation(
    Line(points = {{-386, 9}, {-361, 9}, {-361, 100}, {-166, 100}}, color = {0, 0, 127}));
  connect(orbit_following_segments.ref_v, stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.ref_2) annotation(
    Line(points = {{-386, -5}, {-352, -5}, {-352, 90}, {-166, 90}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_angles_DCM[3], stateFeedbackControl_AH1_5in_4out_no_sat_CEGIS_LMI.out_4) annotation(
    Line(points = {{158, 10}, {240, 10}, {240, -12}, {-216, -12}, {-216, 12}, {-166, 12}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_angle_yaw, add.u2) annotation(
    Line(points = {{157, 19}, {240, 19}, {240, -119}, {-362, -119}, {-362, -82}, {-329, -82}}, color = {0, 0, 127}));
  connect(generic_AUV_3d.out_angles_DCM[3], orbit_following_segments.yaw_meas) annotation(
    Line(points = {{158, 10}, {241, 10}, {241, -134}, {-446, -134}, {-446, -20}, {-434, -20}}, color = {0, 0, 127}));
protected
  annotation(
    Icon(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    Diagram(coordinateSystem(preserveAspectRatio = false, extent = {{-1000, -1000}, {1000, 1000}}, grid = {1, 1})),
    experiment(StopTime = 5000, Interval = 0.1, Tolerance = 1e-06, __Dymola_Algorithm = "Dassl"));
end TestAUV_5d_CEGIS_LMI_monopile;