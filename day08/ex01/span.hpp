#pragma once
#include <iostream>
#include <vector>
#include <exception>
#include <algorithm>

class tolong: public std::exception
{
    virtual const char* what() const throw() 
    { return ("Not enough space in the span to add the range."); }
};

class noarr: public std::exception
{
    virtual const char* what() const throw() 
    { return ("No elements in array."); }
};

class err: public std::exception
{
    virtual const char* what() const throw() 
    { return ("Error."); }
};

class Span{
    private:
        int m_n;
        std::vector<int> m_arr;
    public:
        Span(int n);
        Span(const Span &s);
        ~Span();

        void addNumber(int x);

        int shortestSpan(void);
        int longestSpan(void);
        Span &operator=(Span &s);
};