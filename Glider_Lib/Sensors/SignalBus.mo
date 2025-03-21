within Glider_Lib.Sensors;

expandable connector SignalBus
  "Control bus that is adapted to the signals connected to it"
  extends Modelica.Icons.SignalBus;

  import Modelica.Units.SI;

  Integer integerSignal "Integer signal" annotation (HideResult=false);
  Boolean booleanSignal "Boolean signal" annotation (HideResult=false);
  Real distanceNEDtoECI annotation (HideResult=false);
  SI.Angle[3] EulerAnglesBWrtNEDInNED annotation (HideResult=false);
  SI.Angle[3] EulerAnglesBWrtNEDInNEDIntegration annotation (HideResult=false);
  SI.Angle[3] EulerAnglesBWrtECIInECI annotation (HideResult=false);
  SI.Angle[3] EulerAnglesAbsoluteSensor annotation (HideResult=false);

  SI.Velocity velocityCurrentsInB[3] annotation (HideResult=false);
  SI.Velocity velocityLinearOfBodyWrtECIInBody[3] annotation (HideResult=false);
  SI.Velocity velocityAngularOfBodyWrtECIInBody[3] annotation (HideResult=false);
  SI.Velocity velocityRelativeToFluidLinearOfBodyWrtECIInBody[3] annotation (HideResult=false);
  SI.Velocity velocityRelativeToFluidAngularOfBodyWrtECIInBody[3] annotation (HideResult=false);

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

  SI.Density rho annotation (HideResult=false);

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

