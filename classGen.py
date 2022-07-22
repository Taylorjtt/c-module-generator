
import c_class_generator as gen
from datetime import datetime
import sys


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    dateTimeObj = datetime.now()
    timestampStr = dateTimeObj.strftime("%d-%b-%Y (%H:%M:%S.%f)")
    className = sys.argv[1];
    authorName = input("Enter your name\n")
    numberOfVariables = input("How many member variables does this module have?\n")
    singletonResponse = input("Is this a singleton module? (y/n) \n");
    singleton = False;
    if singletonResponse == "y":
        singleton = True
    variables = []
    for x in range(int(numberOfVariables)):
        variables.append(input("Enter next variable (ex uint8_t count)\n"))

    gen.createHeaderFile(className,variables,authorName,timestampStr,singleton)
    gen.createCFile(className, variables, authorName, timestampStr, singleton)


    # comment user input lines and uncomment lines below for testing
    # gen.createHeaderFile("Vector3D",["double x", "double y", "double z"],"John Taylor",timestampStr,True)
    # gen.createCFile("Vector3D",["double x", "double y", "double z"],"John Taylor",timestampStr,True)


