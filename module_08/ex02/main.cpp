#include "Mutantstack.hpp"

int main()
{
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --ite;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    std::cout << "*********" << std::endl;

    MutantStack<int> mstack1;
    mstack1.push(1);
    mstack1.push(1);
    mstack1.push(1);
    mstack1.swap(mstack);
    MutantStack<int>::iterator it1 = mstack1.begin();
    MutantStack<int>::iterator ite1 = mstack1.end();
    while (it1 != ite1)
    {
        std::cout << *it1 << std::endl;
        ++it1;
    }

    return (0);
}