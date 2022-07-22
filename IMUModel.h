/*****************************************************************************
* Copyright (C) 2022 by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file IMUModel.h
 * @brief
 *
 *  @author John Taylor
 * 	@date 14-Jun-2022 (15:57:00.436311)
 *
 */
#ifndef SRC_IMUMODEL_H_
#define SRC_IMUMODEL_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <zephyr.h>

/**
* @brief Structure representing a IMUModel object
*
*/
typedef struct IMUMODEL_OBJ
{
 Vector3DHandle accelerometer;
 Vector3DHandle magnetometer;
 Vector3DHandle gyroscope;

}IMUMODELObject;

typedef struct IMUMODEL_OBJ *IMUModelHandle;
extern IMUModelHandle iMUModel;

/**
* @brief Constructor for IMUModel object
*
*Initializes the singleton IMUModel
* @return void
*/
    
void IMUMODEL_Constructor();
    
/**
* @brief
* Getter for accelerometer
* @return accelerometer
*/
Vector3DHandle IMUMODEL_getAccelerometer();
    
/**
* @brief
* Setter for accelerometer
* @param accelerometer value to set 
* @return void
*/
void IMUMODEL_setAccelerometer(Vector3DHandle accelerometer);
/**
* @brief
* Getter for magnetometer
* @return magnetometer
*/
Vector3DHandle IMUMODEL_getMagnetometer();
    
/**
* @brief
* Setter for magnetometer
* @param magnetometer value to set 
* @return void
*/
void IMUMODEL_setMagnetometer(Vector3DHandle magnetometer);
/**
* @brief
* Getter for gyroscope
* @return gyroscope
*/
Vector3DHandle IMUMODEL_getGyroscope();
    
/**
* @brief
* Setter for gyroscope
* @param gyroscope value to set 
* @return void
*/
void IMUMODEL_setGyroscope(Vector3DHandle gyroscope);

#endif