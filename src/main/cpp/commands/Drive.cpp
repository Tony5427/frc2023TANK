// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "commands/Drive.h"

Drive::Drive(DriveSubsystem *driver, double xSpeed, double rot)
    : m_drive(driver), m_xSpeed(xSpeed), m_rotation(rot){
  // Register that this command requires the subsystem.
  AddRequirements(m_drive);
}

void Drive::Initialize() {
  m_drive->TankDrive(m_xSpeed, m_rotation);
}

void Drive::Execute() {}

void Drive::End(bool interrupted) {}
