#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template<typename T>
class Array
{
private:
    T * data;
    unsigned int m_n;
public:
    Array();
    Array(unsigned int n);
    Array(Array const& src);
    unsigned int size()
    {
        return (this->m_n);
    };
    Array<T>& operator=(Array const& src);
    T& operator[](unsigned int);
    ~Array();
};


template<typename T>
Array<T>::Array() : m_n(0)
{
    this->data = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
    this->data = new T[n];
    for(unsigned int i = 0; i < n; i++)
        this->data[i] = 0;
    this->m_n = n;
}

template<typename T>
Array<T>& Array<T>::operator=(Array const& src)
{
    if(this != &src)
    {
        this->data = new T[src.m_n]; 
        for(unsigned int i = 0; i < src.m_n; i++)
            this->data[i] = src.data[i];
        this->m_n = src.m_n;
    }
    return (*this);
}


template<typename T>
Array<T>::Array(Array const& src)
{
    *this = src;
    return ;
}

template<typename T>
T& Array<T>::operator[](unsigned int i)
{
    if(i < 0 || i >=  this->m_n)
        throw std::exception();
    return (this->data[i]);
}

template<typename T>
Array<T>::~Array()
{
    delete data;
}
#endif