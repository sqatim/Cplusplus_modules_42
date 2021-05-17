#include "Pony.hpp"
void ponyOnTheStack()
{
    Pony pony("I am on the stack");
}
void ponyOnTheHeap()
{
    Pony *pony = new Pony("I am on the heap");
    delete pony;
    std::cout << "Pony is deleted from the heap" << std::endl;
}

int main()
{
    ponyOnTheStack();
    ponyOnTheHeap();
    return (0);
}