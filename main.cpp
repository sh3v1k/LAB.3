#include <iostream>
#include <stdint.h>

#include "diod.h"

int main()
{
    std::cout << "Hell" << std::endl;
    LedDiod diod;
    diod.setColor("green");
    diod.showColor();
    diod.setBrightness(29);
    diod.showBrightness();
    return 0;
}