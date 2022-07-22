/*****************************************************************************
* Copyright (C) 2022 by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file IMUModel.c
 * @brief
 *
 *  @author John Taylor
 * 	@date 14-Jun-2022 (15:57:00.436311)
 *
 */


#include "IMUModel.h"

IMUModelHandle iMUModel;

void IMUMODEL_Constructor()
{
    iMUModel = k_malloc(sizeof(IMUMODELObject));

    IMUMODELObject *obj;
    iMUModel = (IMUModelHandle)iMUModel;
    obj = (IMUMODELObject *)iMUModel;
}

/**
* @brief
* Getter for accelerometer
* @return accelerometer
*/
Vector3DHandle IMUMODEL_getAccelerometer()
{
    IMUMODELObject *obj = (IMUMODELObject *)iMUModel;
    return obj->accelerometer;
}

/**
* @brief
* Setter for accelerometer
* @param accelerometer value to set 
* @return void
*/
void IMUMODEL_setAccelerometer(Vector3DHandle accelerometer)
{
    IMUMODELObject *obj = (IMUMODELObject *)iMUModel;
    obj->accelerometer = accelerometer;
}

/**
* @brief
* Getter for magnetometer
* @return magnetometer
*/
Vector3DHandle IMUMODEL_getMagnetometer()
{
    IMUMODELObject *obj = (IMUMODELObject *)iMUModel;
    return obj->magnetometer;
}

/**
* @brief
* Setter for magnetometer
* @param magnetometer value to set 
* @return void
*/
void IMUMODEL_setMagnetometer(Vector3DHandle magnetometer)
{
    IMUMODELObject *obj = (IMUMODELObject *)iMUModel;
    obj->magnetometer = magnetometer;
}

/**
* @brief
* Getter for gyroscope
* @return gyroscope
*/
Vector3DHandle IMUMODEL_getGyroscope()
{
    IMUMODELObject *obj = (IMUMODELObject *)iMUModel;
    return obj->gyroscope;
}

/**
* @brief
* Setter for gyroscope
* @param gyroscope value to set 
* @return void
*/
void IMUMODEL_setGyroscope(Vector3DHandle gyroscope)
{
    IMUMODELObject *obj = (IMUMODELObject *)iMUModel;
    obj->gyroscope = gyroscope;
}

