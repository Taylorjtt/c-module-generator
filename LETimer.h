/*****************************************************************************
* Copyright (C) 2020 by John Taylor
*
* Redistribution, modification or use of this software in source or binary
* forms is permitted as long as the files maintain this copyright. Users are
* permitted to modify this and use it to learn about the field of embedded
* software. John Taylor and the University of Colorado are not liable for
* any misuse of this material.
*
*****************************************************************************/
/*
 * @file LETimer.h
 * @brief
 *
 *  @author John Taylor
 * 	@date 06-Feb-2020 (18:47:22.046195)
 *
 */


#ifndef SRC_LETIMER_H_
#define SRC_LETIMER_H_


#include <stdio.h>

/**
* @brief Structure representing an +LETimer object
*
*/
typedef struct LETIMER_OBJ
{

}LETIMERObject;

typedef struct LETIMER_OBJ *LETimerHandle;



/**
* @brief Constructor for LETimer object
*
* Given a chunk of memory, the size of an LETIMERObject this function
* initializes the memory to be used as an and returns a pointer to the object
*
* @param pmemory	The pointer to the memory that this object will use
* @param numbytes	The expected size of the object
*
* @return LETimerHandle a pointer to an LETIMERObject
*/

LETimerHandle LETIMER_Constructor(void *pmemory, const size_t numbytes);



/**
* @brief
*
*
* @return void
*/
void LETIMER_(LETimerHandle handle);


#endif