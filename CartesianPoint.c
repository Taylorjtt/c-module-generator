/*****************************************************************************
* Copyright (C) 2022 by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file CartesianPoint.c
 * @brief
 *
 *  @author John Taylor
 * 	@date 05-Jun-2022 (17:58:40.521988)
 *
 */


#include "CartesianPoint.h"

CartesianPointHandle CARTESIANPOINT_Constructor(void *pmemory, const size_t numbytes)
{
    CartesianPointHandle handle;
    CARTESIANPOINTObject *obj;

    if(numbytes < sizeof(CARTESIANPOINTObject))
    {
        return ((CartesianPointHandle)NULL);
    }

    handle = (CartesianPointHandle)pmemory;
    obj = (CARTESIANPOINTObject *)handle;
    return handle;
}

/**
* @brief
* Getter for x
* @param CartesianPointHandle pointer to class
* @return x
*/
float CARTESIANPOINT_getX(CartesianPointHandle handle)
{
    CARTESIANPOINTObject *obj = (CARTESIANPOINTObject *)handle;
    return obj->x;
}

/**
* @brief
* Setter for x
* @param CartesianPointHandle pointer to class
* @param x value to set 
* @return void
*/
void CARTESIANPOINT_setX(CartesianPointHandle handle,float x)
{
    CARTESIANPOINTObject *obj = (CARTESIANPOINTObject *)handle;
    obj->x = x;
}

/**
* @brief
* Getter for y
* @param CartesianPointHandle pointer to class
* @return y
*/
float CARTESIANPOINT_getY(CartesianPointHandle handle)
{
    CARTESIANPOINTObject *obj = (CARTESIANPOINTObject *)handle;
    return obj->y;
}

/**
* @brief
* Setter for y
* @param CartesianPointHandle pointer to class
* @param y value to set 
* @return void
*/
void CARTESIANPOINT_setY(CartesianPointHandle handle,float y)
{
    CARTESIANPOINTObject *obj = (CARTESIANPOINTObject *)handle;
    obj->y = y;
}

