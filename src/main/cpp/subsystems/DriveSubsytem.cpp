// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubsystem.h"
#include <frc/motorcontrol/Spark.h>

DriveSubsystem::DriveSubsystem() {
  // Implementation of subsystem constructor goes here.
  frc::Spark leftone{0};
  frc::Spark lefttwo{1};
  frc::Spark rightone{2};
  frc::Spark righttwo{3};
}

void DriveSubsystem::TankDrive(double xSpeed) {
  leftone.Set(xSpeed);
  lefttwo.Set(xSpeed);
  rightone.Set(-xSpeed);
  righttwo.Set(-xSpeed);
}

void DriveSubsystem::Periodic() {
  // Implementation of subsystem periodic method goes here.
}