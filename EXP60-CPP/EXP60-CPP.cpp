// Incorporating the header file with the cpp file ensures that both files are getting the same exact compiler
#include "EXP60-CPP.h"
#include <iostream>

// This function prints out the object's data
void processStandardLayoutObject(StandardLayout &obj)
{
    std::cout << "Processing StandardLayout object. Data: " << obj.data << std::endl;
}

// This function creates an object with the standard layout type
void appFunction()
{
    StandardLayout obj;
    obj.data = 123456789;
    processStandardLayoutObject(obj);
}

int main()
{
    appFunction();
    return 0;
}