import c_code_generator as gen

def captal(string):
    return string[0].upper() + string[1:]
def camel(string):
    return string[0].lower() + string[1:]

def createGettersDeclarations(className,vars,singleton):
    decs = ""
    for var in vars:
        type = var.split(" ")[0]
        name = var.split(" ")[1]
        if singleton:
            decs += gen.functionDeclaration(type, className + "_get" + captal(name),"")
        else:
            decs += gen.functionDeclaration(type, className + "_get" + captal(name),[className+"Handle handle"])
    return decs

def createGettersImplementations(className, vars, singleton):
    decs = ""
    for var in vars:
        type = var.split(" ")[0]
        name = var.split(" ")[1]
        body = getterBody(className,var,singleton)
        if singleton:
            decs += gen.functionImplementation(type, className + "_get" + captal(name),body)
        else:
            decs += gen.functionImplementation(type, className + "_get" + captal(name),body,[className+"Handle handle"])
    return decs

def createSetterImplementations(className, vars, singleton):
    decs = ""
    for var in vars:
        type = var.split(" ")[0]
        name = var.split(" ")[1]
        body = setterBody(className, var, singleton)
        if singleton:
            decs += gen.functionImplementation(type, className + "_set" + captal(name),body,[type + " " + name])
        else:
            decs += gen.functionImplementation(type, className + "_set" + captal(name),body,[className+"Handle handle",type + " " + name])
    return decs



def createSettersDeclarations(className,vars, singleton):
    decs = ""
    for var in vars:
        type = var.split(" ")[0]
        name = var.split(" ")[1]
        if singleton:
            decs += gen.functionDeclaration(type, className + "_set" + captal(name),[type + " " + name])
        else:
            decs += gen.functionDeclaration(type, className + "_set" + captal(name),[className+"Handle handle",type + " " + name])
        return decs

def constructorBody(className, variables, singleton):
    if singleton:
        body = " "+camel(className)+" = malloc(sizeof(" + className + "));\n"
        for var in variables:
            name = var.split(" ")[1]
            body += " "+camel(className)+"->" + name + " = NULL;\n"
    else:
        body = " "+className+"Handle handle = malloc(sizeof("+className+"));\n"
        for var in variables:
            name = var.split(" ")[1]
            body += " handle->" + name + " = NULL;\n"
            body += " return handle;\n"

    return body;

def destructorBody(className, singleton):
    if singleton:
        return " free(" + camel(className)+");\n"
    else:
        return "free(handle);\n"


def setterBody(className,variable,singleton):
    name = variable.split(" ")[1]
    if singleton:
        return " " + camel(className)+"->" + name + " = " + name + ";\n"
    else:
        return " handle->"+name+" = "+name+";\n"
def getterBody(className,variable,singleton):
    name = variable.split(" ")[1]
    if singleton:
        return " return "+camel(className)+"->"+name+";\n"
    else:
        return " return handle->"+name+";\n"


def createHeaderFile(className, vars,author,date,singleton):
    h_file = open(className + ".h", "w+")
    h_file.write(gen.fileHeader(className+".h", author,date))
    h_file.write(gen.headerGuard(className))
    h_file.write(gen.typedefStruct(className,vars))
    h_file.write(gen.typedefStructPtr(className,className+"Handle"))
    if singleton:
        h_file.write("extern "+className+"Handle "+camel(className) + gen.semi()+"\n\n")
        h_file.write(gen.functionDeclaration("void",className+"_Constructor"))
    else:
        h_file.write(gen.functionDeclaration(className + "Handle", className + "_Constructor"))

    h_file.write(gen.functionDeclaration("void", className + "_Destructor"))

    h_file.write(createGettersDeclarations(className, vars, singleton))
    h_file.write(createSettersDeclarations(className,vars,singleton))
    h_file.write(gen.endif())
    h_file.close()

def createCFile(className, vars,author,date,singleton):
    c_file = open(className + ".c", "w+")
    c_file.write(gen.fileHeader(className+".c", author,date))
    c_file.write(gen.include(className))
    cbody = constructorBody(className, vars, singleton)
    dbody = destructorBody(className,singleton)
    if singleton:
        c_file.write(className+"Handle "+camel(className) + gen.semi()+"\n\n")
        c_file.write(gen.functionImplementation("void",className+"_Constructor",cbody))
    else:
        c_file.write(gen.functionImplementation(className + "Handle", className + "_Constructor",cbody))

    c_file.write(gen.functionImplementation("void", className + "_Destructor", dbody))

    c_file.write(createGettersImplementations(className,vars,singleton))
    c_file.write(createSetterImplementations(className, vars, singleton))
    c_file.close()
