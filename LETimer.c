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
 * @file LETimer.c
 * @brief
 *
 *  @author John Taylor
 * 	@date 06-Feb-2020 (18:47:22.046195)
 *
 */


#include "LETimer.h"

LETimerHandle LETIMER_Constructor(void *pmemory, const size_t numbytes)
{
	LETimerHandle handle;
	LETIMERObject *obj;

	if(numbytes < sizeof(LETIMERObject))
	{
		return ((LETimerHandle)NULL);
	}

	handle = (LETimerHandle)pmemory;
	obj = (LETIMERObject *)handle;



	return handle;
}



/**
* @brief
*
*
* @return void
*/
void LETIMER_(LETimerHandle handle)
{
    LETIMERObject *obj = (LETIMERObject *)handle;
}

