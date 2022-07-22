/*****************************************************************************
* Copyright (C) 2022 by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file Vector3D.h
 * @brief
 *
 *  @author John Taylor
 * 	@date 14-Jun-2022 (15:54:19.861262)
 *
 */
#ifndef SRC_VECTOR3D_H_
#define SRC_VECTOR3D_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <zephyr.h>

/**
* @brief Structure representing a Vector3D object
*
*/
typedef struct VECTOR3D_OBJ
{
 double x;
 double y;
 double z;

}VECTOR3DObject;

typedef struct VECTOR3D_OBJ *Vector3DHandle;


/**
* @brief Constructor for Vector3D object
*
* Initializes the class Vector3D
* @return Vector3Dhandle
*/

Vector3DHandle VECTOR3D_Constructor(void *pmemory, const size_t numbytes);

/**
* @brief
* Getter for x
* @param handle to the object to operate on 
* @return x
*/
double VECTOR3D_getX(Vector3DHandle handle);

/**
* @brief
* Setter for x
* @param handle to the object to operate on 
* @param x value to set 
* @return void
*/
void VECTOR3D_setX(Vector3DHandle handle, double x);
/**
* @brief
* Getter for y
* @param handle to the object to operate on 
* @return y
*/
double VECTOR3D_getY(Vector3DHandle handle);

/**
* @brief
* Setter for y
* @param handle to the object to operate on 
* @param y value to set 
* @return void
*/
void VECTOR3D_setY(Vector3DHandle handle, double y);
/**
* @brief
* Getter for z
* @param handle to the object to operate on 
* @return z
*/
double VECTOR3D_getZ(Vector3DHandle handle);

/**
* @brief
* Setter for z
* @param handle to the object to operate on 
* @param z value to set 
* @return void
*/
void VECTOR3D_setZ(Vector3DHandle handle, double z);

#endif