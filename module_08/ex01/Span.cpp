#include "Span.hpp"

Span::Span(unsigned int n) : m_n(n)
{
    return;
}

void Span::addNumber(long number)
{
    if(number > 2147483647 || number < -2147483648)
        throw std::string("Out of limit.");
    if(m_n > 0)
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

void Span::print(std::vector<int> v)
{
    std::cout << "*****************" << std::endl;
    for (int i = 0; i < v.size(); i++)
        std::cout << v[i] << std::endl;
    std::cout << "*****************" << std::endl;
}

Span::~Span()
{
    return;
}