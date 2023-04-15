// Copyright (c) FIRST and other WPILib contributors.
// Open Source Software; you can modify and/or share it under the terms of
// the WPILib BSD license file in the root directory of this project.

#pragma once

/**
 * The Constants header provides a convenient place for teams to hold robot-wide
 * numerical or boolean constants.  This should not be used for any other
 * purpose.
 *
 * It is generally a good idea to place constants into subsystem- or
 * command-specific namespaces within this header, which can then be used where
 * they are needed.
 */

namespace constants {
constexpr int X = 0;
constexpr int Y = 1;
constexpr int rot = 2;
constexpr int slider = 3;

constexpr int trigger = 1;

constexpr double deadband = 0.05;


constexpr int kDriverControllerPort = 0;

    //****** NUMBERS *******/
constexpr double Z_ROT_DAMPENING = 0.75;
constexpr double TURN_TOLERANCE =  2;
constexpr double DRIVE_TOLERANCE = 0.5;
constexpr double DRIVETRAIN_WHEEL_DIAMETER = 4; //in inches
constexpr double DRIVE_SPEED = 1.0;

            /*****************Motor ports*****************/
constexpr int LEFT_TOP_MOTOR = 1; 
constexpr int LEFT_BOTTOM_MOTOR = 2;
constexpr int RIGHT_TOP_MOTOR = 3;
constexpr int RIGHT_BOTTOM_MOTOR = 4;



}  // namespace OperatorConstants
