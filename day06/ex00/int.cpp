#include <iostream>
#include <cmath>

void p_int(int &value)
{
    std::cout << "int: " << value << std::endl;
}

void p_int(float &value)
{
    if (std::isinf(value) || std::isnan(value))
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    int v = static_cast<int>(value);
    std::cout << "int: " << v << std::endl;
}

void p_int(double &value)
{
    if (std::isinf(value) || std::isnan(value))
    {
        std::cout << "int: impossible" << std::endl;
        return;
    }
    int v = static_cast<int>(value);
    std::cout << "int: " << v << std::endl;
}

void p_int(char &value)
{
    int v = static_cast<int>(value);
    std::cout << "int: " << v << std::endl;
}