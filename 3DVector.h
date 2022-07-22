/*****************************************************************************
* Copyright (C) 2022 by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file 3DVector.h
 * @brief
 *
 *  @author John Taylor
 * 	@date 14-Jun-2022 (15:52:19.624314)
 *
 */
#ifndef SRC_3DVECTOR_H_
#define SRC_3DVECTOR_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <zephyr.h>

/**
* @brief Structure representing a 3DVector object
*
*/
typedef struct 3DVECTOR_OBJ
{
 double x;
 double y;
 double z;

}3DVECTORObject;

typedef struct 3DVECTOR_OBJ *3DVectorHandle;


/**
* @brief Constructor for 3DVector object
*
* Initializes the class 3DVector
* @return 3DVectorhandle
*/

3DVectorHandle 3DVECTOR_Constructor(void *pmemory, const size_t numbytes);

/**
* @brief
* Getter for x
* @param handle to the object to operate on 
* @return x
*/
double 3DVECTOR_getX(3DVectorHandle handle);

/**
* @brief
* Setter for x
* @param handle to the object to operate on 
* @param x value to set 
* @return void
*/
void 3DVECTOR_setX(3DVectorHandle handle, double x);
/**
* @brief
* Getter for y
* @param handle to the object to operate on 
* @return y
*/
double 3DVECTOR_getY(3DVectorHandle handle);

/**
* @brief
* Setter for y
* @param handle to the object to operate on 
* @param y value to set 
* @return void
*/
void 3DVECTOR_setY(3DVectorHandle handle, double y);
/**
* @brief
* Getter for z
* @param handle to the object to operate on 
* @return z
*/
double 3DVECTOR_getZ(3DVectorHandle handle);

/**
* @brief
* Setter for z
* @param handle to the object to operate on 
* @param z value to set 
* @return void
*/
void 3DVECTOR_setZ(3DVectorHandle handle, double z);

#endif