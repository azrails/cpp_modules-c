#include <iostream>
template <typename T>
Array<T>::Array(){
    _arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int len): _len(len){
    this->_arr = new T[_len];
}

template <typename T>
Array<T>::Array(Array &a){
    _len = a.size();
    _arr = new T[_len];
    for (int i = 0; i < _len; i++)
        _arr[i] = a._arr[i];
}

template <typename T>
Array<T>::~Array()
{
    delete []_arr;
}

template <typename T>
unsigned int Array<T>::size(void)
{
    return this->_len;
}

template <typename T>
Array<T> &Array<T>::operator=(Array &a)
{
    if (this != &a)
    {
        _len = a.size();
        _arr = new T[_len];
        for (int i = 0; i < _len; i++)
            _arr[i] = a._arr[i];
    }
    return this;   
}

template <typename T>
T &Array<T>::operator[](unsigned int i)
{
    if (i < this->size() && i >= 0)
        return this->_arr[i];
    throw ArrayAcces();
}

template <typename T>
void Array<T>::setElem(T e, unsigned int i)
{
    if (i < this->size() && i >= 0)
        this->_arr[i] = e;
    else
        throw ArrayAcces();
}