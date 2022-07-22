/*****************************************************************************
* Copyright (C) 2022 by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file CartesianPoint.h
 * @brief
 *
 *  @author John Taylor
 * 	@date 05-Jun-2022 (17:58:40.521988)
 *
 */
#ifndef SRC_CARTESIANPOINT_H_
#define SRC_CARTESIANPOINT_H_


#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <zephyr.h>

/**
* @brief Structure representing a CartesianPoint object
*
*/
typedef struct CARTESIANPOINT_OBJ
{
 float x;
 float y;

}CARTESIANPOINTObject;

typedef struct CARTESIANPOINT_OBJ *CartesianPointHandle;


/**
* @brief Constructor for CartesianPoint object
*
* Initializes the class CartesianPoint
* @return CartesianPointhandle
*/

CartesianPointHandle CARTESIANPOINT_Constructor(void *pmemory, const size_t numbytes);

/**
* @brief
* Getter for x
* @param handle to the object to operate on 
* @return x
*/
float CARTESIANPOINT_getX(CartesianPointHandle handle);

/**
* @brief
* Setter for x
* @param handle to the object to operate on 
* @param x value to set 
* @return void
*/
void CARTESIANPOINT_setX(CartesianPointHandle handle, float x);
/**
* @brief
* Getter for y
* @param handle to the object to operate on 
* @return y
*/
float CARTESIANPOINT_getY(CartesianPointHandle handle);

/**
* @brief
* Setter for y
* @param handle to the object to operate on 
* @param y value to set 
* @return void
*/
void CARTESIANPOINT_setY(CartesianPointHandle handle, float y);

#endif