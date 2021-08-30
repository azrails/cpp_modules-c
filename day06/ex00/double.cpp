#include <iostream>
#include <iomanip>

void p_double(double &value, int &prec)
{
    std::cout << std::fixed << std::setprecision(prec);
    std::cout << "double: " << value << std::endl;
}

void p_double(float &value, int &prec)
{
    double v = static_cast<double>(value);
    p_double(v, prec);
}

void p_double(char &value, int &prec)
{
    double v = static_cast<double>(value);
    p_double(v, prec);
}

void p_double(int &value, int &prec)
{
    double v = static_cast<double>(value);
    p_double(v, prec);
}
