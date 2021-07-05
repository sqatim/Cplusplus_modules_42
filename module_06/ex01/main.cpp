#include <iostream>
typedef struct s_data
{
    std::string str;
    int number;
}Data;

uintptr_t serialize(Data* ptr)
{
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw)
{
    return (reinterpret_cast<Data *>(raw));
}

void initialiseData(Data *data)
{
    data->number = 1337;
    data->str = "Leet";
}

int main()
{
    Data data;
    uintptr_t raw;

    initialiseData(&data);
    raw = serialize(&data);
    std::cout << "i'm student in " << data.number << std::endl;
    std::cout << "That mean: \"" << data.str <<  "\"" << std::endl;
    data = *deserialize(raw);
    std::cout << "i'm student in " << data.number << std::endl;
    std::cout << "That mean: \"" << data.str <<  "\"" << std::endl;
    return (0);
}