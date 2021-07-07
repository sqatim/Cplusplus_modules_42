#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

class Span
{
private:
    Span();
    int m_n;
    std::vector<int> m_ints;
public:
    Span(unsigned int n);
    Span(Span const& src);
    Span operator=(Span const& src);
    void addNumber(long number);
    int shortestSpan();
    int longestSpan();
    void print(std::vector<int> c); // khasni nhaydha  a zdtha 
    ~Span();
};

#endif