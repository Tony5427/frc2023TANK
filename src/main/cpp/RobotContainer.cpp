// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#include "RobotContainer.h"

#include <frc2/command/RunCommand.h>
#include <frc2/command/InstantCommand.h>
#include <frc2/command/StartEndCommand.h>
#include <frc2/command/button/JoystickButton.h>
#include <frc2/command/button/POVButton.h>
#include "subsystems/DriveSubsystem.h"

#include "Constants.h"


RobotContainer::RobotContainer() {
  
  // Initialize all of your commands and subsystems here
    m_drive.SetDefaultCommand(frc2::RunCommand(
    [this] {
      // double yOutput = std::abs(m_driveController.GetRawAxis(Y)) > deadband ?
      //                   m_driveController.GetRawAxis(Y) : 0;
  //     double xOutput = std::abs(m_driveController.GetRawAxis(X)) > deadband ?
  //                       m_driveController.GetRawAxis(X) : 0;
  //     double rotOutput = std::abs(m_driveController.GetRawAxis(rot)) > deadband ?
  //                         m_driveController.GetRawAxis(rot) : 0;
  
  // double xSpeed = std::abs(m_driveController.GetRawAxis(Y));

        double xSpeed = m_driveController.GetY();
        double zRotation = m_driveController.GetZ();


        // drive all motors with joystick
        m_drive.TankDrive(xSpeed, zRotation);

  //     m_drive.Drive(units::meters_per_second_t{yOutput},
  //                   units::meters_per_second_t{xOutput},
  //                   units::radians_per_second_t{rotOutput});

  // m_drive.TankDrive(xSpeed);
    },
    {&m_drive}
  ));
  // Configure the button bindings
  ConfigureBindings();
}

void RobotContainer::ConfigureBindings() {



  // Configure your trigger bindings here

  // Schedule `ExampleCommand` when `exampleCondition` changes to `true`
  // frc2::Trigger([this] {
  //   return m_subsystem.ExampleCondition();
  // }).OnTrue(ExampleCommand(&m_subsystem).ToPtr());

  // Schedule `ExampleMethodCommand` when the Xbox controller's B button is
  // pressed, cancelling on release.
  // m_driverController.B().WhileTrue(m_subsystem.ExampleMethodCommand());
}

// frc2::CommandPtr RobotContainer::GetAutonomousCommand() {
//   // An example command will be run in autonomous
//   return autos::ExampleAuto(&m_subsystem);
// }
