from datetime import datetime

dateTimeObj = datetime.now()

timestampStr = dateTimeObj.strftime("%d-%b-%Y (%H:%M:%S.%f)")

year = dateTimeObj.strftime("%Y")

className = input("Enter the name of the C module\n")
authorName = input("Enter your name")

h_file = open(className+".h","w+");
h_file.write("""/*****************************************************************************
* Copyright (C) """+year+""" by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted.Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
""")

h_file.write("""/*
 * @file """+className+""".h
 * @brief
 *
 *  @author """+authorName+"""
 * 	@date """+timestampStr+"""
 *
 */


""")

h_file.write("""#ifndef SRC_"""+className.upper()+"""_H_
#define SRC_"""+className.upper()+"""_H_


#include <stdio.h>

""")

h_file.write("""/**
* @brief Structure representing a """+className+""" object
*
*/
typedef struct """+className.upper()+"""_OBJ
{

}"""+className.upper()+"""Object;

typedef struct """+className.upper()+"""_OBJ *"""+className+"""Handle;



/**
* @brief Constructor for """+className+""" object
*
* Given a chunk of memory, the size of an """+className.upper()+"""Object this function
* initializes the memory to be used as an and returns a pointer to the object
*
* @param pmemory	The pointer to the memory that this object will use
* @param numbytes	The expected size of the object
*
* @return """+className+"""Handle a pointer to an """+className.upper()+"""Object
*/

"""+className+"""Handle """+className.upper()+"""_Constructor(void *pmemory, const size_t numbytes);



/**
* @brief
*
*
* @return void
*/
void """+className.upper()+"""_("""+className+"""Handle handle);

""")


h_file.write("\n#endif")
h_file.close();

c_file = open(className+".c","w+");

c_file.write("""/*****************************************************************************
* Copyright (C) """+year+""" by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted.Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
""")

c_file.write("""/*
 * @file """+className+""".c
 * @brief
 *
 *  @author """+authorName+"""
 * 	@date """+timestampStr+"""
 *
 */


#include \""""+className+""".h\"

"""+className+"""Handle """+className.upper()+"""_Constructor(void *pmemory, const size_t numbytes)
{
	"""+className+"""Handle handle;
	"""+className.upper()+"""Object *obj;

	if(numbytes < sizeof("""+className.upper()+"""Object))
	{
		return (("""+className+"""Handle)NULL);
	}

	handle = ("""+className+"""Handle)pmemory;
	obj = ("""+className.upper()+"""Object *)handle;



	return handle;
}



/**
* @brief
*
*
* @return void
*/
void """+className.upper()+"""_("""+className+"""Handle handle)
{
    """+className.upper()+"""Object *obj = ("""+className.upper()+"""Object *)handle;
}

""")

