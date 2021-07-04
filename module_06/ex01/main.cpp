#include <string>
#include <iomanip>
#include <iostream>

typedef struct  Data
{
    int i;//8 
    std::string str; //24 ---> 52 ----> 
}Data; 

uintptr_t serialization(Data *d) 
{
    return (reinterpret_cast<uintptr_t>(d));
}

Data * deserialization(uintptr_t p)
{
    return (reinterpret_cast<Data*>(p));
}

int main()
{
    Data *d = new Data;
    d->i = 100;
    d->str = "hello";
    uintptr_t p = serialization(d);
    Data *m = deserialization(p); // data -- > (xml,json,yaml...) 
    std::cout << m->i << std::endl;// xml ----> data 
    std::cout << m->str << std::endl;
    return (0);
}
