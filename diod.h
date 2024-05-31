#include <cmath>
class LedDiod
{
private:
    std::string clr;
    int brightness;

public:
    const double rev_current = 10 * pow(10.0, -6.0);
    const double therm_volt = 26 * pow(10.0, -3);
    const double e = 2.71;

    LedDiod(/* args */);
    ~LedDiod();
    void setColor(std::string color);
    void setBrightness(int br);
    void showColor();
    void showBrightness();
    double calcDiodCurrent(double voltage);
    void showDiodCurrent(double voltage);
};