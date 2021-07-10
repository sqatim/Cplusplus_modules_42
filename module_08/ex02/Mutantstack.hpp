#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack : public std::stack<T>
{
private:
public:
    MutantStack(){ return; }
    typedef typename std::stack<T>::container_type::iterator iterator;
    MutantStack(MutantStack const& src){*this = src;}
    MutantStack operator=(MutantStack const& src)
    {
        if(this != src)
        {}
        return (*this);
    }
    iterator begin(){return this->c.begin();}
    iterator end(){return this->c.end();}
    ~MutantStack(){ return; }
}; 

#endif

