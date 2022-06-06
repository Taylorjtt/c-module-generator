# C Module Generator

The C Module Generator is a python script that creates the boilerplate code for an object oriented c module. The script takes the member variables and their types and creates a structure and getters and setters for the member variables.
The script can create standard classes which you can create more that one instance of or static/singleton style classes of which only one exists.


# Usage
Here is an example usage  of the program to create a simple cartesian point class

	PS C:\Users\jttaylor\git\c-module-generator> python .\c_class_generator.py
	Enter the name of the C module
	CartesianPoint
	Enter your name
	John Taylor
	How many member variables does this module have?
	2
	Is this a static/singleton module? (y/n) 
	n
	Enter next variable (ex uint8_t count)
	float x
	Enter next variable (ex uint8_t count)
	float y
