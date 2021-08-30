#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

void p_float(float &value, int &prec)
{
    std::cout << std::fixed << std::setprecision(prec);
    std::cout << "float: " << value << "f" << std::endl;
}

void p_float(double &value, int &prec)
{
    float v = static_cast<float>(value);
    p_float(v, prec);
}

void p_float(int &value, int &prec)
{
    float v = static_cast<float>(value);
    p_float(v, prec);
}

void p_float(char &value, int &prec)
{
    float v = static_cast<float>(value);
    p_float(v, prec);
}
