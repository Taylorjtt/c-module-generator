/*****************************************************************************
* Copyright (C) 2022 by Myolyn LLC
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted.Myolyn is are  liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file StimulationModel.c
 * @brief
 *
 *  @author John Taylor
 * 	@date 04-Jun-2022 (08:15:28.381431)
 *
 */


#include "StimulationModel.h"

StimulationModelHandle STIMULATIONMODEL_Constructor(void *pmemory, const size_t numbytes)
{
	StimulationModelHandle handle;
	STIMULATIONMODELObject *obj;

	if(numbytes < sizeof(STIMULATIONMODELObject))
	{
		return ((StimulationModelHandle)NULL);
	}

	handle = (StimulationModelHandle)pmemory;
	obj = (STIMULATIONMODELObject *)handle;



	return handle;
}



/**
* @brief
*
*
* @return void
*/
void STIMULATIONMODEL_(StimulationModelHandle handle)
{
    STIMULATIONMODELObject *obj = (STIMULATIONMODELObject *)handle;
}

