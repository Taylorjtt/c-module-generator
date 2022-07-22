
import c_code_generator as gen
from datetime import datetime


# Press the green button in the gutter to run the script.
if __name__ == '__main__':
    h_file = open("test"+".h","w+")
    params = ["int a", "float b", "void * d"]
    print(params)
    ret = "void"
    name = "testFunction"
    className = "Test"
    dateTimeObj = datetime.now()
    timestampStr = dateTimeObj.strftime("%d-%b-%Y (%H:%M:%S.%f)")
    h_file.write(gen.fileHeader(className + ".h", "John Taylor", timestampStr))
    h_file.write(gen.headerGuard(className))
    h_file.write(gen.typedefStruct("Vector3D",["double x", "double y", "double z"]))
    h_file.write(gen.typedefStructPtr("Vector3D", "Vector3DHandle"))
    h_file.write(gen.functionDeclaration(ret,name,params))
    h_file.write(gen.endif())

    h_file.close();

# See PyCharm help at https://www.jetbrains.com/help/pycharm/
