#include <iostream>
#include <stdint.h>

#include "diod.h"

LedDiod::LedDiod(/* args */)
{
}

LedDiod::~LedDiod()
{
}

void LedDiod::setColor(std::string color)
{
    if (color == "red"  color == "blue"  color == "green")
        clr = color;
    else
        clr = "red";
}
void LedDiod::setBrightness(int br)
{
    if (br >= 0 && br <= 100)
        brightness = br;
    else
        brightness = 0;
}
void LedDiod::showColor()
{
    std::cout << "led color is " << clr << std::endl;
}
void LedDiod::showBrightness()
{
    std::cout << "led brightness is " << brightness << std::endl;
}
double LedDiod::calcDiodCurrent(double voltage)
{
    double current = rev_current * (pow(e, (voltage / therm_volt)) - 1);
    return current;
}
void LedDiod::showDiodCurrent(double voltage)
{
}