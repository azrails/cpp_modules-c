#include <iostream>
#include "Array.hpp"

int main(void)
{
    Array<int> arr(12);
    for (int i = 0; i < 12; i++)
        arr.setElem(i,i);
    for (int i = 0; i < 12; i++)
        std::cout << arr[i] << std::endl;
    return 0;
}