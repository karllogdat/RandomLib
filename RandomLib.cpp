#include "RandomLib.h"
#include <sstream>

std::string* Split(std::string arg, int num)
{
    std::string* strArr = new std::string[num];
    int i = 0; // For loops

    std::stringstream ssin(arg);

    while (ssin.good() && i < num) {
        ssin >> strArr[i];
        ++i;
    } 

    return strArr;
}