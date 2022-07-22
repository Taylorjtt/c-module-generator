def headerGuard(className):
    guard = "#ifndef " + className.upper() + "_H\n"
    guard += "#define " + className.upper() + "_H\n\n"
    return guard


def endif():
    return "#endif"


def commentHeader():
    return "/*\n"


def commentLineStart():
    return "* "


def commentBrief(brief):
    return "* @brief " + brief + '\n'


def commentFile(fileName):
    return "* @file " + fileName + '\n'


def commentAuthor(author):
    return "* @author " + author + '\n'


def commentDate(date):
    return "* @date " + date + '\n'


def commentParam(param, description):
    return "* @param " + param + ' ' + description + '\n'


def commentReturn(ret, description):
    return "* @return " + ret + ' ' + description + '\n'


def commentEnd():
    return "*/\n"


def semi():
    return ";\n"


def fileHeader(fileName, author, date):
    head = commentHeader()
    head += commentFile(fileName)
    head += commentBrief("")
    head += commentAuthor(author)
    head += commentDate(date)
    head += commentEnd()
    head += "\n\n"
    return head


def documentationComment(ret, name, params):
    comment = ""
    print(comment)
    comment += commentHeader()
    print(comment)
    comment += commentBrief(name)
    print(comment)
    for param in params:
        comment += commentParam(param, "")
    comment += commentReturn(ret, "")
    comment += commentEnd()
    print(comment)
    return comment


def functionSignature(ret, name, params):
    sig = ""
    sig += ret + " " + name + "(";
    param_length = len(params) - 1
    for param in params:
        if params.index(param) == param_length:
            sig += param + ")"
        else:
            sig += param + ", "
    return sig


def functionDeclaration(ret, name, params):
    dec = documentationComment(ret, name, params)
    dec += functionSignature(ret, name, params)
    dec += semi() + "\n" \
                    ""
    return dec


def typedefStruct(name, variables):
    struct = "typedef struct " + name + "\n{\n"
    for var in variables:
        struct += " "+var + semi()
    struct += "}" + name + semi() + '\n'
    return struct


def typedefStructPtr(structName, ptrName):
    struct = "typedef struct " + structName + " *" + ptrName + "\n\n";
    return struct;
