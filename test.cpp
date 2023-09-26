#include <iostream>
#include "RandomLib.h"

int main() {
    std::string* name_splitted = new std::string[4];
    name_splitted = Split("one two three four", 4);

    for (int i = 0; i < 4; i++) {
        std::cout << name_splitted[i] << std::endl;
    }
}