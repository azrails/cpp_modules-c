#include <iostream>
#include <algorithm>
#include <exception>
class ex: public std::exception
{
    virtual const char* what() const throw() 
    { return ("Not found."); }
};

template <typename T>
typename T::iterator easyfind(T &obj, int s)
{
    typename T::iterator it;
    if ((it = std::find(obj.begin(), obj.end(), s)) != obj.end())
        return it;
    throw ex();
}