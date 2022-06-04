/*****************************************************************************
* Copyright (C) 2022 by Myolyn LLC
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted.Myolyn is are  liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file StimulationChannel.h
 * @brief
 *
 *  @author John Taylor
 * 	@date 04-Jun-2022 (08:22:23.594370)
 *
 */


#ifndef SRC_STIMULATIONCHANNEL_H_
#define SRC_STIMULATIONCHANNEL_H_


#include <stdio.h>

/**
* @brief Structure representing an +StimulationChannel object
*
*/
typedef struct STIMULATIONCHANNEL_OBJ
{

}STIMULATIONCHANNELObject;

typedef struct STIMULATIONCHANNEL_OBJ *StimulationChannelHandle;



/**
* @brief Constructor for StimulationChannel object
*
* Given a chunk of memory, the size of an STIMULATIONCHANNELObject this function
* initializes the memory to be used as an and returns a pointer to the object
*
* @param pmemory	The pointer to the memory that this object will use
* @param numbytes	The expected size of the object
*
* @return StimulationChannelHandle a pointer to an STIMULATIONCHANNELObject
*/

StimulationChannelHandle STIMULATIONCHANNEL_Constructor(void *pmemory, const size_t numbytes);



/**
* @brief
*
*
* @return void
*/
void STIMULATIONCHANNEL_(StimulationChannelHandle handle);


#endif