/*****************************************************************************
* Copyright (C) 2022 by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file 3DVector.c
 * @brief
 *
 *  @author John Taylor
 * 	@date 14-Jun-2022 (15:52:19.624314)
 *
 */


#include "3DVector.h"

3DVectorHandle 3DVECTOR_Constructor()
{
    3DVectorHandle handle = malloc(sizeof(3DVECTORObject));
    3DVECTORObject *obj;
	
    if(numbytes < sizeof(3DVECTORObject))
    {
        return ((3DVectorHandle)NULL);
    }

    handle = (3DVectorHandle)pmemory;
    obj = (3DVECTORObject *)handle;
	
	obj->x = 0;
	obj->y = 0;
	obj->z = 0;
	
    return handle;
}

/**
* @brief
* Getter for x
* @param 3DVectorHandle pointer to class
* @return x
*/
double 3DVECTOR_getX(3DVectorHandle handle)
{
    3DVECTORObject *obj = (3DVECTORObject *)handle;
    return obj->x;
}

/**
* @brief
* Setter for x
* @param 3DVectorHandle pointer to class
* @param x value to set 
* @return void
*/
void 3DVECTOR_setX(3DVectorHandle handle,double x)
{
    3DVECTORObject *obj = (3DVECTORObject *)handle;
    obj->x = x;
}

/**
* @brief
* Getter for y
* @param 3DVectorHandle pointer to class
* @return y
*/
double 3DVECTOR_getY(3DVectorHandle handle)
{
    3DVECTORObject *obj = (3DVECTORObject *)handle;
    return obj->y;
}

/**
* @brief
* Setter for y
* @param 3DVectorHandle pointer to class
* @param y value to set 
* @return void
*/
void 3DVECTOR_setY(3DVectorHandle handle,double y)
{
    3DVECTORObject *obj = (3DVECTORObject *)handle;
    obj->y = y;
}

/**
* @brief
* Getter for z
* @param 3DVectorHandle pointer to class
* @return z
*/
double 3DVECTOR_getZ(3DVectorHandle handle)
{
    3DVECTORObject *obj = (3DVECTORObject *)handle;
    return obj->z;
}

/**
* @brief
* Setter for z
* @param 3DVectorHandle pointer to class
* @param z value to set 
* @return void
*/
void 3DVECTOR_setZ(3DVectorHandle handle,double z)
{
    3DVECTORObject *obj = (3DVECTORObject *)handle;
    obj->z = z;
}

