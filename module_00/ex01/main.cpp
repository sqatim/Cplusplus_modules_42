#include "PhoneBook.class.hpp"
int check_if_in(std::string str)
{
    int i;

    i = 0;
    if ((str[i] >= '0' && str[i] < '8') && str[i + 1] == '\0')
        return (1);
    return (0);
}

int main()
{
    std::string command;
    std::string search = "";
    PhoneBook contact[8];
    int i;

    i = 0;
    while (1)
    {
        std::cin >> command;
        if (command == "ADD")
        {
            if (i < 8)
            {
                contact[i].addInformation();
                i++;
            }
            else
                std::cout << "Sorry, u cant add any constact." << std::endl;
        }
        else if (command == "SEARCH")
        {
            contact->printFields(contact);

            while (1)
            {
                std::cin >> search;
                if (check_if_in(search))
                {
                    contact->searchInformation(contact[stoi(search)]);
                    break;
                }
                else
                    std::cout << "Sorry, number of index is wrong ! reinsert the number." << std::endl;
            }
        }
        else if (command == "EXIT")
        {
            return (0);
        }
        else
        {
            std::cout << "wrong command" << std::endl;
        }
    }
    return (0);
}