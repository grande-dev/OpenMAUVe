within OpenMAUVe.Sensors;
expandable connector SignalBus
  "Control bus that is adapted to the signals connected to it"
  extends Modelica.Icons.SignalBus;

  import Modelica.Units.SI;

  Real distanceNEDtoECI annotation (HideResult=false);
  Real distanceNED0toECI annotation (HideResult=false);
  Real distanceObtoECI annotation (HideResult=false);
  Real distanceObtoNED0 annotation (HideResult=false);
  Real distanceObtoNED annotation (HideResult=false);

  SI.Position[3] positionBodyWrtECIinECI annotation (HideResult=false);
  SI.Position[3] positionBodyWrtNEDinNED annotation (HideResult=false);
  SI.Position[3] positionBodyWrtNED0inNED0 annotation (HideResult=false);
  SI.Position[3] positionBodyWrtECIinNED annotation (HideResult=false);
  SI.Position[3] positionBodyWrtECIinNED0 annotation (HideResult=false);

  SI.Position depth annotation (HideResult=false);

  SI.Angle[3] EulerAngles annotation (HideResult=false);
  SI.Angle[3] EulerAnglesBWrtNEDInNED annotation (HideResult=false);
  SI.Angle[3] EulerAnglesBWrtNEDInNEDIntegration annotation (HideResult=false);
  SI.Angle[3] EulerAnglesBWrtNED0InNED0 annotation (HideResult=false);
  SI.Angle[3] EulerAnglesBWrtNED0InNED0Integration annotation (HideResult=false);
  SI.Angle[3] EulerAnglesBWrtECIInECI annotation (HideResult=false);
  SI.Angle[3] EulerAnglesAbsoluteSensor annotation (HideResult=false);

  SI.Velocity[3] velocityCurrentsInB "u_c, v_c, w_c" annotation (HideResult=false);
  SI.Velocity[3] velocityCurrentsInNED "u_c^n, v_c^n, w_c^n" annotation (HideResult=false);
  SI.Velocity[3] velocityLinearOfBodyWrtNEDInBody annotation (HideResult=false);
  SI.AngularVelocity[3] velocityAngularOfBodyWrtNEDInBody annotation (HideResult=false);
  SI.Velocity[3] velocityLinearOfBodyWrtECIInBody "u, v, w" annotation (HideResult=false);
  SI.AngularVelocity[3] velocityAngularOfBodyWrtECIInBody "p, q, r" annotation (HideResult=false);
  SI.Velocity[3] velocityRelativeToFluidLinearOfBodyWrtECIInBody "u_r, v_r, w_r" annotation (HideResult=false);
  SI.Velocity[3] velocityRelativeToFluidAngularOfBodyWrtECIInBody "p_r, q_r, r_r" annotation (HideResult=false);

  SI.Acceleration[3] accelerationLinearCOM "u_dot, v_dot, w_dot"  annotation (HideResult=false);
  SI.AngularAcceleration[3] accelerationAngularCOM "p_dot, q_dot, r_dot"  annotation (HideResult=false);

  SI.Angle alpha annotation (HideResult=false);
  SI.Angle beta annotation (HideResult=false);
  Real alpha_deg(unit = "deg") annotation (HideResult=false);
  Real beta_deg(unit = "deg") annotation (HideResult=false);
  SI.Angle chi "Course angle" annotation (HideResult=false);   // χ
  SI.Angle xsi "Glide path angle" annotation (HideResult=false); // ξ
  SI.Velocity flowspeed annotation (HideResult=false);
  SI.Velocity u_r annotation (HideResult=false);
  SI.Velocity v_r annotation (HideResult=false);
  SI.Velocity w_r annotation (HideResult=false);

  SI.Density rho "Fluid density" annotation (HideResult=false);
  SI.Temperature fluidT "Fluid temperature" annotation (HideResult=false);

  annotation (Icon(coordinateSystem(preserveAspectRatio=true, extent={{-100,
            -100},{100,100}}), graphics={Rectangle(
                  extent={{-20,2},{22,-2}},
                  lineColor={255,204,51},
                  lineThickness=0.5)}), Documentation(info="<html>
<p>
This connector defines the \"expandable connector\" ControlBus that
is used as bus in the
<a href=\"modelica://Modelica.Blocks.Examples.BusUsage\">BusUsage</a> example.
Note, this connector contains \"default\" signals that might be utilized
in a connection (the input/output causalities of the signals
are determined from the connections to this bus).
</p>
</html>"));

end SignalBus;
