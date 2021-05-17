#include "phonebook.hpp"
int check_if_in(std::string str)
{
    int i;

    i = 0;
    if ((str[i] >= '0' && str[i] < '8') && str[i + 1] == '\0')
        return (1);
    return (0);
}

void    searchInformation(Contact instance)
{
    std::cout << "first name : " << instance.get_firstName() << std::endl;
    std::cout << "last name : " << instance.get_lastName() << std::endl;
    std::cout << "nickname : " << instance.get_nickname() << std::endl;
    std::cout << "login : " << instance.get_login() << std::endl;
    std::cout << "postal adress : " << instance.get_postalAdress() << std::endl;
    std::cout << "email adress : " << instance.get_emailAdress() << std::endl;
    std::cout << "phone number : " << instance.get_phoneNumber() << std::endl;
    std::cout << "birthday date : " << instance.get_birthdatDate() << std::endl;
    std::cout << "favorite meal : " << instance.get_firstName() << std::endl;
    std::cout << "underwear color : " << instance.get_underwearColor() << std::endl;
    std::cout << "darkest secret : " << instance.get_darkestSecret() << std::endl;
}

int main()
{
    std::string command;
    std::string search = "";
    Contact contact[8];
    int i;

    i = 0;
    while (1)
    {
        std::cout << "choose a command : ADD/SEARCH/EXIT" << std::endl;
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
            std::cout << "choose index" << std::endl; 
            while (1)
            {
                std::cin >> search;
                if (check_if_in(search))
                {
                    searchInformation(contact[stoi(search)]);
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