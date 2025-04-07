within OpenMAUVe.Vehicles;
model SlocumVehicle
  extends GenericGlider_mass_explicit(redeclare Records.AddedMassData_Slocum
      addedMassData_SeaGlider);
end SlocumVehicle;
