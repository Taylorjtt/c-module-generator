from datetime import datetime


def writeStaticGetterSetterDeclaration(file, variable):
    strings = variable.split(" ")
    type = strings[0]
    name = strings[1]

    file.write("""/**
* @brief
* Getter for """+name+"""
* @return """+name+"""
*/
"""+type+""" """+className.upper()+"""_get"""+name[0].upper() + name[1:]+"""();
    
""")

    file.write("""/**
* @brief
* Setter for """ + name + """
* @param """+name+""" value to set 
* @return void
*/
void """ + className.upper() + """_set"""+name[0].upper() + name[1:]+"""("""+type+""" """+name+""");
""")


def writeGetterSetterDeclaration(file, variable):
    strings = variable.split(" ")
    type = strings[0]
    name = strings[1]

    file.write("""/**
* @brief
* Getter for """ + name + """
* @param handle to the object to operate on 
* @return """ + name + """
*/
""" + type + """ """ + className.upper() + """_get""" + name[0].upper() + name[1:] + """("""+className+"""Handle handle);

""")

    file.write("""/**
* @brief
* Setter for """ + name + """
* @param handle to the object to operate on 
* @param """+name+""" value to set 
* @return void
*/
void """ + className.upper() + """_set""" + name[0].upper() + name[1:] + """("""+className+"""Handle handle, """ + type + """ """ + name + """);
""")

def writeHeader(file):
    file.write("""/*****************************************************************************
* Copyright (C) """ + year + """ by Myolyn Inc
*
* Redistribution, modification or use of this software in source or binary
* forms is not permitted. Myolyn is not liable for
* any misuse of this material.
*
*****************************************************************************/
""")

def writeConstructorImpl(file):
    file.write(className + """Handle """ + className.upper() + """_Constructor(void *pmemory, const size_t numbytes)
{
    """ + className + """Handle handle;
    """ + className.upper() + """Object *obj;

    if(numbytes < sizeof(""" + className.upper() + """Object))
    {
        return ((""" + className + """Handle)NULL);
    }

    handle = (""" + className + """Handle)pmemory;
    obj = (""" + className.upper() + """Object *)handle;
    return handle;
    }
    
    """)

def writeStaticConstructorImpl(file):

    file.write("""void """ + className.upper() + """_Constructor()
{
    """+variableName +" = k_malloc(sizeof("""+objectName+"""));

    """+objectName+""" *obj;
    """+variableName+""" = ("""+handleTypeName+""")"""+variableName+""";
    obj = ("""+objectName+""" *)"""+variableName+""";
}

"""
)

def writeStaticGetterSetterImpl(file,variable):
    strings = variable.split(" ")
    type = strings[0]
    name = strings[1]

    file.write("""/**
* @brief
* Getter for """ + name + """
* @return """ + name + """
*/
""" + type + """ """ + className.upper() + """_get""" + name[0].upper() + name[1:] + """()
{
    """ + castStaticHandleToObject + """
    return obj->""" + name + """;
}

""")

    file.write("""/**
* @brief
* Setter for """ + name + """
* @param """ + name + """ value to set 
* @return void
*/
void """ + className.upper() + """_set""" + name[0].upper() + name[1:] + """(""" + type + """ """ + name + """)
{
    """ + castStaticHandleToObject + """
    obj->""" + name + """ = """ + name + """;
}

""")

def writeGetterSetterImpl(file,variable):
    strings = variable.split(" ")
    type = strings[0]
    name = strings[1]

    file.write("""/**
* @brief
* Getter for """ + name + """
* @param """ + handleTypeName +""" pointer to class
* @return """ + name + """
*/
""" + type + """ """ + className.upper() + """_get""" + name[0].upper() + name[1:] + """(""" + handleTypeName +""" handle)
{
    """ + castHandleToObject + """
    return obj->""" + name + """;
}

""")

    file.write("""/**
* @brief
* Setter for """ + name + """
* @param """ + handleTypeName +""" pointer to class
* @param """ + name + """ value to set 
* @return void
*/
void """ + className.upper() + """_set""" + name[0].upper() + name[1:] + """(""" + handleTypeName +""" handle,""" + type + """ """ + name + """)
{
    """ + castHandleToObject + """
    obj->""" + name + """ = """ + name + """;
}

""")


dateTimeObj = datetime.now()

timestampStr = dateTimeObj.strftime("%d-%b-%Y (%H:%M:%S.%f)")

year = dateTimeObj.strftime("%Y")

className = input("Enter the name of the C module\n")
authorName = input("Enter your name\n")
numberOfVariables = input("How many member variables does this module have?\n")

staticResponse = input("Is this a static/singleton module? (y/n) \n");
variableName = className[0].lower() + className[1:]
objectName = className.upper()+"""Object"""
handleTypeName = className+"Handle"
castStaticHandleToObject = objectName + " *obj = (" + objectName + " *)" + variableName + ";"
castHandleToObject = objectName + " *obj = (" + objectName + " *)handle;"

isStatic = False;
if staticResponse == "y":
    isStatic = True


variables = []

for x in range(int(numberOfVariables)):
    variables.append(input("Enter next variable (ex uint8_t count)\n"))




h_file = open(className+".h","w+")

writeHeader(h_file)

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
#include <stdlib.h>
#include <stdint.h>
#include <zephyr.h>

""")

h_file.write("""/**
* @brief Structure representing a """+className+""" object
*
*/
typedef struct """+className.upper()+"""_OBJ
{
""")

for v in variables:
    h_file.write(" "+v + ";\n")

h_file.write("""
}"""+className.upper()+"""Object;

typedef struct """+className.upper()+"""_OBJ *"""+className+"""Handle;
""")

if isStatic:
    h_file.write("""extern """ + className + """Handle """ + variableName+""";""")
    h_file.write("""

/**
* @brief Constructor for """+className+""" object
*
*Initializes the singleton """+className+"""
* @return void
*/
    
void """+className.upper()+"""_Constructor();
    
""")
    for v in variables:
        writeStaticGetterSetterDeclaration(h_file,v)
else:

    h_file.write("""

/**
* @brief Constructor for """ + className + """ object
*
* Initializes the class """ + className + """
* @return """+className+"""handle
*/

"""+className+"""Handle """+className.upper()+"""_Constructor(void *pmemory, const size_t numbytes);

""")
    for v in variables:
        writeGetterSetterDeclaration(h_file,v)

h_file.write("\n#endif")
h_file.close();

c_file = open(className+".c","w+");


writeHeader(c_file)


c_file.write("""/*
 * @file """+className+""".c
 * @brief
 *
 *  @author """+authorName+"""
 * 	@date """+timestampStr+"""
 *
 */


#include \""""+className+""".h\"
\n""")

if isStatic:

    c_file.write(className+"""Handle """ + className[0].lower() + className[1:]+""";\n\n""")
    writeStaticConstructorImpl(c_file)
    for v in variables:
        writeStaticGetterSetterImpl(c_file,v)

else:
    writeConstructorImpl(c_file)
    for v in variables:
        writeGetterSetterImpl(c_file,v)


c_file.close()

