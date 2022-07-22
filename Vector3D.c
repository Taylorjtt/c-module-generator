/*****************************************************************************
* Copyright (C) 2022 by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file Vector3D.c
 * @brief
 *
 *  @author John Taylor
 * 	@date 14-Jun-2022 (15:54:19.861262)
 *
 */


#include "Vector3D.h"

Vector3DHandle VECTOR3D_Constructor(void *pmemory, const size_t numbytes)
{
    Vector3DHandle handle;
    VECTOR3DObject *obj;

    if(numbytes < sizeof(VECTOR3DObject))
    {
        return ((Vector3DHandle)NULL);
    }

    handle = (Vector3DHandle)pmemory;
    obj = (VECTOR3DObject *)handle;
    return handle;
}

/**
* @brief
* Getter for x
* @param Vector3DHandle pointer to class
* @return x
*/
double VECTOR3D_getX(Vector3DHandle handle)
{
    VECTOR3DObject *obj = (VECTOR3DObject *)handle;
    return obj->x;
}

/**
* @brief
* Setter for x
* @param Vector3DHandle pointer to class
* @param x value to set 
* @return void
*/
void VECTOR3D_setX(Vector3DHandle handle,double x)
{
    VECTOR3DObject *obj = (VECTOR3DObject *)handle;
    obj->x = x;
}

/**
* @brief
* Getter for y
* @param Vector3DHandle pointer to class
* @return y
*/
double VECTOR3D_getY(Vector3DHandle handle)
{
    VECTOR3DObject *obj = (VECTOR3DObject *)handle;
    return obj->y;
}

/**
* @brief
* Setter for y
* @param Vector3DHandle pointer to class
* @param y value to set 
* @return void
*/
void VECTOR3D_setY(Vector3DHandle handle,double y)
{
    VECTOR3DObject *obj = (VECTOR3DObject *)handle;
    obj->y = y;
}

/**
* @brief
* Getter for z
* @param Vector3DHandle pointer to class
* @return z
*/
double VECTOR3D_getZ(Vector3DHandle handle)
{
    VECTOR3DObject *obj = (VECTOR3DObject *)handle;
    return obj->z;
}

/**
* @brief
* Setter for z
* @param Vector3DHandle pointer to class
* @param z value to set 
* @return void
*/
void VECTOR3D_setZ(Vector3DHandle handle,double z)
{
    VECTOR3DObject *obj = (VECTOR3DObject *)handle;
    obj->z = z;
}

