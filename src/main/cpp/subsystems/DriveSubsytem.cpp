// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "subsystems/DriveSubsystem.h"
#include <frc/motorcontrol/Spark.h>

DriveSubsystem::DriveSubsystem() {
  // Implementation of subsystem constructor goes here.
}

void DriveSubsystem::TankDrive(double xSpeed, double rot) {


  leftone.Set(xSpeed-rot);
  lefttwo.Set(xSpeed-rot);
  rightone.Set(-xSpeed+rot);
  righttwo.Set(-xSpeed+rot);
}

void DriveSubsystem::Periodic() {
  // Implementation of subsystem periodic method goes here.
}