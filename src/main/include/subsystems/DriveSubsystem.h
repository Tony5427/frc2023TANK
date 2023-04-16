// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

#include <frc2/command/CommandPtr.h>
#include <frc2/command/SubsystemBase.h>
#include <frc/motorcontrol/Spark.h>
#include <frc/motorcontrol/MotorControllerGroup.h>
#include <frc/drive/DifferentialDrive.h>

class DriveSubsystem : public frc2::SubsystemBase {
 public:
  DriveSubsystem();

  /**
   * Drive command factory method.
   */

  void Periodic() override;

  void TankDrive(double xSpeed, double rot);


 private:
  // Components (e.g. motor controllers and sensors) should generally be
  // declared private and exposed only through public methods.
  frc::Spark leftone{0};
  frc::Spark lefttwo{1};
  frc::Spark rightone{2};
  frc::Spark righttwo{3};
  frc::MotorControllerGroup m_leftMotors{leftone, lefttwo};
  frc::MotorControllerGroup m_rightMotors{rightone, righttwo};
  frc::DifferentialDrive m_drive{m_leftMotors, m_rightMotors};
};
