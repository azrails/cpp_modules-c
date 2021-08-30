#include <iostream>
#include <typeinfo>

template <typename T>
const T& min(const T &a, const T &b)
{
    return (a < b ? a:b);
}

template <typename T>
const T& max(const T &a, const T &b)
{
    return (a < b ? b:a);
}

template <typename T>
void swap(T &a, T &b)
{
    T c = a;
    a = b;
    b = c;
}