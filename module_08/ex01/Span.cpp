#include "Span.hpp"

Span::Span(unsigned int n) : m_n(n)
{
    return;
}

Span::Span(Span const &src)
{
    *this = src;
    return;
}

Span Span::operator=(Span const &src)
{
    if (this != &src)
    {
        this->m_n = src.m_n;
        this->m_ints = src.m_ints;
    }
    return (*this);
}

void Span::addNumber(long number)
{
    if (number > 2147483647 || number < -2147483648)
        throw std::string("Out of limit.");
    if (m_n > 0)
    {
        m_ints.push_back(number);
        m_n--;
    }
    else
        throw std::string("Out of range.");
    return;
}

int Span::shortestSpan()
{
    std::vector<int> copy;
    int shortSpan;
    if (m_ints.size() < 2)
        throw std::string("Size is less of 2.");
    copy = m_ints;
    sort(copy.begin(), copy.end());
    shortSpan = copy[1] - copy[0];
    return (shortSpan);
}

int Span::longestSpan()
{
    std::vector<int> copy;
    int shortSpan;

    if (m_ints.size() < 2)
        throw std::string("Size is less of 2.");
    copy = m_ints;
    sort(copy.begin(), copy.end());
    shortSpan = copy[copy.size() - 1] - copy[0];
    return (shortSpan);
}

Span::~Span()
{
    return;
}