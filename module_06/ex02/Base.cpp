#include "Base.hpp"

Base *generate()
{
    int index;

    srand(time(0));
    index = rand() % 3;
    Base *base[] = {new A(), new B(), new C()};
    for (int i = 0; i < 3; i++)
    {
        if (i != index)
            delete base[i];
    }
    return base[index];
}

void identify(Base *p)
{
    if (dynamic_cast<A *>(p))
        std::cout << "A" << std::endl;
    if (dynamic_cast<B *>(p))
        std::cout << "B" << std::endl;
    if (dynamic_cast<C *>(p))
        std::cout << "C" << std::endl;
}

Base::~Base()
{
}

void identify(Base &p)
{
    try
    {
        A &a = dynamic_cast<A &>(p);
        (void)a;
        std::cout << "A" << std::endl;
    }
    catch (std::bad_cast &badCast)
    {
    }
    try
    {
        B &b = dynamic_cast<B &>(p);
        (void)b;
        std::cout << "B" << std::endl;
    }
    catch (std::bad_cast &badCast)
    {
    }
    try
    {
        C &c = dynamic_cast<C &>(p);
        (void)c;
        std::cout << "C" << std::endl;
    }
    catch (std::bad_cast &badCast)
    {
    }
}