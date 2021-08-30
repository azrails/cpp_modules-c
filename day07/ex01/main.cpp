#include "template.hpp"
#include <iostream>
#include <string>


int main (void)
{
    int a = 2,b = 4;
    char c = 'H', d = 'O';
    float e = 1.02, f = 1.0002;

    std::cout << min(a, b) << std::endl;
    std::cout << max(a, b) << std::endl;
    swap(a, b);
    std::cout << "a: "<< a << " b: " << b << std::endl;
    std::cout << min(c, d) << std::endl;
    std::cout << max(c, d) << std::endl;
    swap(c, d);
    std::cout << "c: "<< c << " d: " << d << std::endl;
    std::cout << min(e, f) << std::endl;
    std::cout << max(e, f) << std::endl;
    swap(e, f);
    std::cout << "e: "<< e << " f: " << f << std::endl;
    return 0;
}