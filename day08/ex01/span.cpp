#include "span.hpp"

Span::Span(int n): m_n(n)
{
}

void Span::addNumber(int x)
{
    if (m_arr.size() <= m_n)
        m_arr.push_back(x);
    else
        throw tolong();
    std::sort(m_arr.begin(), m_arr.end());
}

int Span::shortestSpan(void){
    if (m_arr.size() < 1)
        throw noarr();
    std::vector<int>::iterator min = std::min_element(m_arr.begin(), m_arr.end());
    std::vector<int>::iterator max = std::max_element(m_arr.begin(), m_arr.end());
    std::vector<int>::iterator tmp = m_arr.begin();
    for (int i = 0; i < m_arr.size(); i++)
    {
        if (*tmp < *max && *tmp != *min)
            max = tmp;
        tmp++;
    }
    return std::abs(*max - *min);
}

int Span::longestSpan(void){
    if (m_arr.size() < 1)
    throw noarr();
    std::vector<int>::iterator start = m_arr.begin();
    std::vector<int>::iterator end = m_arr.end();
    end--;
    return std::abs(*start - *end);
}

Span::Span(const Span &s): m_n(s.m_n) 
{
    std::vector<int>::const_iterator it = s.m_arr.begin();
    for (int i = 0; i<s.m_arr.size(); i++)
    {
        m_arr.push_back(*it);
        it++;
    }
}

Span &Span::operator=(Span &s)
{
    if (&s != this)
    {
        m_n = s.m_n;
        std::vector<int>::iterator it= s.m_arr.begin();
        for (int i = 0; i<s.m_arr.size(); i++)
        {
            m_arr.push_back(*it);
            it++;
        }
    }
    return *this;
}

Span::~Span()
{

}
