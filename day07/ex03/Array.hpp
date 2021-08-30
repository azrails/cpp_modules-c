template <typename T>
class Array
{
private:
    T *_arr;
    unsigned int _len; 
public:
    Array();
    Array(unsigned int len);
    Array(Array &a);
    ~Array();

    unsigned int size(void);
    void setElem(T e, unsigned int i);
    Array &operator=(Array &a);
    T &operator[](unsigned int i);
};

class ArrayAcces: public std::exception
{
public:
    ArrayAcces(){};
    ~ArrayAcces(){};
    virtual const char* what() const throw() { return ("Out of bounds. (Out of the array)"); };
};

#include "Array.inl"