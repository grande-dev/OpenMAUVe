within Glider_Lib;
package Records "Vehicle parameters"
  record AddedMassData_SeaGlider
    extends Modelica.Icons.Record;

    parameter Real X_udot = 0.0 " added mass forces and inertia torques";
    parameter Real X_vdot = 0.0 " added mass forces and inertia torques";
    parameter Real X_wdot = 0.0 " added mass forces and inertia torques";
    parameter Real X_pdot = 0.0 " added mass forces and inertia torques";
    parameter Real X_qdot = 0.0 " added mass forces and inertia torques";
    parameter Real X_rdot = 0.0 " added mass forces and inertia torques";
    parameter Real Y_udot = 0.0 " added mass forces and inertia torques";
    parameter Real Y_vdot = 0.0 " added mass forces and inertia torques";
    parameter Real Y_wdot = 0.0 " added mass forces and inertia torques";
    parameter Real Y_pdot = 0.0 " added mass forces and inertia torques";
    parameter Real Y_qdot = 0.0 " added mass forces and inertia torques";
    parameter Real Y_rdot = 0.0 " added mass forces and inertia torques";
    parameter Real Z_udot = 0.0 " added mass forces and inertia torques";
    parameter Real Z_vdot = 0.0 " added mass forces and inertia torques";
    parameter Real Z_wdot = 0.0 " added mass forces and inertia torques";
    parameter Real Z_pdot = 0.0 " added mass forces and inertia torques";
    parameter Real Z_qdot = 0.0 " added mass forces and inertia torques";
    parameter Real Z_rdot = 0.0 " added mass forces and inertia torques";
    parameter Real K_udot = 0.0 " added mass forces and inertia torques";
    parameter Real K_vdot = 0.0 " added mass forces and inertia torques";
    parameter Real K_wdot = 0.0 " added mass forces and inertia torques";
    parameter Real K_pdot = 0.0 " added mass forces and inertia torques";
    parameter Real K_qdot = 0.0 " added mass forces and inertia torques";
    parameter Real K_rdot = 0.0 " added mass forces and inertia torques";
    parameter Real M_udot = 0.0 " added mass forces and inertia torques";
    parameter Real M_vdot = 0.0 " added mass forces and inertia torques";
    parameter Real M_wdot = 0.0 " added mass forces and inertia torques";
    parameter Real M_pdot = 0.0 " added mass forces and inertia torques";
    parameter Real M_qdot = 0.0 " added mass forces and inertia torques";
    parameter Real M_rdot = 0.0 " added mass forces and inertia torques";
    parameter Real N_udot = 0.0 " added mass forces and inertia torques";
    parameter Real N_vdot = 0.0 " added mass forces and inertia torques";
    parameter Real N_wdot = 0.0 " added mass forces and inertia torques";
    parameter Real N_pdot = 0.0 " added mass forces and inertia torques";
    parameter Real N_qdot = 0.0 " added mass forces and inertia torques";
    parameter Real N_rdot = 0.0 " added mass forces and inertia torques";


    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end AddedMassData_SeaGlider;

  record AddedMassData_Slocum
    extends Modelica.Icons.Record;
    extends AddedMassData_SeaGlider;

    annotation (Icon(coordinateSystem(preserveAspectRatio=false)), Diagram(
          coordinateSystem(preserveAspectRatio=false)));
  end AddedMassData_Slocum;
end Records;
