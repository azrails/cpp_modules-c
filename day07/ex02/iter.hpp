#include <iostream>

template <typename T>
void iter(T *adr, int len, void (*func)(T&))
{
    for(int i = 0; i < len; i++)
        func(adr[i]);
}

template<typename T>
void print(T const &t)
{
    std::cout << t << std::endl;
}
template<typename T>
void addOne(T &t)
{
    t++;
}