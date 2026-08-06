within OpenMAUVe.ValidationSimulator;

model ValidationBlueROV2HPrediction
  "BlueROV2H rolling finite-horizon prediction with measured-state reinitialisation"
  extends ValidationBlueROV2H(
    auvBluROV2H_params1(enableStateReset = true));

  parameter Modelica.Units.SI.Time predictionHorizon = 1.0
    "Reset interval; ignored when fullOpenLoop=true";
  parameter Boolean fullOpenLoop = false
    "Disable measured-state resets and reproduce the continuous open-loop test";
  Boolean resetEvent "True only at finite-horizon reset instants";
equation
  resetEvent = if fullOpenLoop then false else sample(predictionHorizon, predictionHorizon);

  auvBluROV2H_params1.referenceFrames.resetState = resetEvent;
  auvBluROV2H_params1.referenceFrames.resetPosition = gt_pos;
  // The FreeMotion translational states are NED-frame quantities. Convert the
  // measured body velocity with the measured 3-2-1 attitude.
  auvBluROV2H_params1.referenceFrames.resetVelocity =
    Modelica.Mechanics.MultiBody.Frames.resolve1(
      Modelica.Mechanics.MultiBody.Frames.axesRotations(
        {3, 2, 1}, {gt_EA[3], gt_EA[2], gt_EA[1]}, zeros(3)),
      gt_vel_body);
  auvBluROV2H_params1.referenceFrames.resetAngles321 =
    {gt_EA[3], gt_EA[2], gt_EA[1]};
  auvBluROV2H_params1.referenceFrames.resetAngularVelocityBody = gt_ang_vel_body;

  annotation(
    experiment(StopTime = 175.0, Interval = 0.02, Tolerance = 1e-5));
end ValidationBlueROV2HPrediction;
