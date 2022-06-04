/*****************************************************************************
* Copyright (C) 2022 by Myolyn LLC
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted.Myolyn is are  liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file StimulationModel.h
 * @brief
 *
 *  @author John Taylor
 * 	@date 04-Jun-2022 (08:15:28.381431)
 *
 */


#ifndef SRC_STIMULATIONMODEL_H_
#define SRC_STIMULATIONMODEL_H_


#include <stdio.h>

/**
* @brief Structure representing an +StimulationModel object
*
*/
typedef struct STIMULATIONMODEL_OBJ
{

}STIMULATIONMODELObject;

typedef struct STIMULATIONMODEL_OBJ *StimulationModelHandle;



/**
* @brief Constructor for StimulationModel object
*
* Given a chunk of memory, the size of an STIMULATIONMODELObject this function
* initializes the memory to be used as an and returns a pointer to the object
*
* @param pmemory	The pointer to the memory that this object will use
* @param numbytes	The expected size of the object
*
* @return StimulationModelHandle a pointer to an STIMULATIONMODELObject
*/

StimulationModelHandle STIMULATIONMODEL_Constructor(void *pmemory, const size_t numbytes);



/**
* @brief
*
*
* @return void
*/
void STIMULATIONMODEL_(StimulationModelHandle handle);


#endif