#include <cctype>
#include <iostream>
#include <cmath>

void p_char(char &value)
{
    std::cout << "char: ";
    if (isprint(value))
        std::cout << "'" << value << "'" << std::endl;
    else
        std::cout << "Non displayable" << std::endl;
}

void p_char(float &value)
{
    if (std::isinf(value) || std::isnan(value) || value > 127 || value < 0){
        std::cout << "char: impossible" << std::endl;
        return;
    }
    char c = static_cast<char>(value);
    p_char(c);
}

void p_char(double &value)
{
    if (std::isinf(value) || std::isnan(value) || value > 127 || value < 0){
        std::cout << "char: impossible" << std::endl;
        return;
    }
    char c = static_cast<char>(value);
    p_char(c);
}

void p_char(int &value)
{
    if (value > 127 || value < 0){
        std::cout << "char: impossible" << std::endl;
        return;
    }
    char c = static_cast<char>(value);
    p_char(c);
}