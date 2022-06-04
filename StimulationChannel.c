/*****************************************************************************
* Copyright (C) 2022 by Myolyn LLC
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted.Myolyn is are  liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file StimulationChannel.c
 * @brief
 *
 *  @author John Taylor
 * 	@date 04-Jun-2022 (08:22:23.594370)
 *
 */


#include "StimulationChannel.h"

StimulationChannelHandle STIMULATIONCHANNEL_Constructor(void *pmemory, const size_t numbytes)
{
	StimulationChannelHandle handle;
	STIMULATIONCHANNELObject *obj;

	if(numbytes < sizeof(STIMULATIONCHANNELObject))
	{
		return ((StimulationChannelHandle)NULL);
	}

	handle = (StimulationChannelHandle)pmemory;
	obj = (STIMULATIONCHANNELObject *)handle;



	return handle;
}



/**
* @brief
*
*
* @return void
*/
void STIMULATIONCHANNEL_(StimulationChannelHandle handle)
{
    STIMULATIONCHANNELObject *obj = (STIMULATIONCHANNELObject *)handle;
}

