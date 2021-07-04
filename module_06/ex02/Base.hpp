#ifndef BASE_HPP
#define BASE_HPP
#include <iostream>
#include <iomanip>
#include <string>

class Base
{
    public:
    virtual ~Base();
    Base *generate(void);

};

class A :public Base
{ };

class B :public Base
{

};

class C :public Base
{

};

void identify(Base* p);
void identify(Base& p);


Base *Base::generate(void)
{
    srand(time(0));
    Base *T[] = {new A(),new B(),new C()};
    int i =0;
    int j = rand() % 3;
    while (i < 3)
    {
        if(i != j)
            delete T[i];
        i++;
    }
    return (T[j]);
}
#endif