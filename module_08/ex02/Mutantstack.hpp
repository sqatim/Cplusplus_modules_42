#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

template<typename T>
class MutantStack
{
private:
    std::stack<T> m_stack;
public:
    MutantStack(){ return; }
    // MutantStack(MutantStack const& src);
    // MutantStack operator=(MutantStack const& src);
    void push(int number) {m_stack.push(number);}
    void pop(){m_stack.pop();}
    T top(){return m_stack.top();}
    class iterator : public std::iterator
    {
    private:
    public:
    };
    std::iterator begin(){return m_stack.begin();}
    ~MutantStack(){ return; }
}; 

#endif

