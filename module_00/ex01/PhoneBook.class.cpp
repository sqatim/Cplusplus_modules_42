#include "PhoneBook.class.hpp"

void PhoneBook::addInformation(void)
{
    std::cout << "first name : ";
    std::cin >> m_first_name;

    std::cout << "last name : ";
    std::cin >> m_last_name;

    std::cout << "nickname : ";
    std::cin >> m_nickname;

    std::cout << "login : ";
    std::cin >> m_login;

    std::cout << "postal adress : ";
    std::cin >> m_postal_adress;

    std::cout << "email adress : ";
    std::cin >> m_email_adress;

    std::cout << "phone number : ";
    std::cin >> m_phone_number;

    std::cout << "birthday date : ";
    std::cin >> m_birthday_date;

    std::cout << "favorite meal : ";
    std::cin >> m_favorite_meal;

    std::cout << "underwear color : ";
    std::cin >> m_underwear_color;

    std::cout << "darkest secret : ";
    std::cin >> m_darkest_secret;

    PhoneBook::_index++;
}

void PhoneBook::searchInformation(PhoneBook instance)
{
    std::cout << "first name : " << instance.m_first_name << std::endl;
    std::cout << "last name : " << instance.m_last_name << std::endl;
    std::cout << "nickname : " << instance.m_nickname << std::endl;
    std::cout << "login : " << instance.m_login << std::endl;
    std::cout << "postal adress : " << instance.m_postal_adress << std::endl;
    std::cout << "email adress : " << instance.m_email_adress << std::endl;
    std::cout << "phone number : " << instance.m_phone_number << std::endl;
    std::cout << "birthday date : " << instance.m_birthday_date << std::endl;
    std::cout << "favorite meal : " << instance.m_favorite_meal << std::endl;
    std::cout << "underwear color : " << instance.m_underwear_color << std::endl;
    std::cout << "darkest secret : " << instance.m_darkest_secret << std::endl;
}

void PhoneBook::printFields(PhoneBook phoneBook[])
{
    for(int i = 0; i < _index; i++)
    {
        std::cout << i << "|";
        condition(phoneBook[i].m_first_name, 1);
        condition(phoneBook[i].m_last_name, 1);
        condition(phoneBook[i].m_nickname, 2);
    }
}

void PhoneBook::condition(std::string const& str, int check)
{
    for(int i = 0; str[i]; i++)
    {
        if(i == 9 && str[i + 1])
        {
            std::cout << ".";
            break;
        }
        std::cout << str[i];
    }
     if(check == 1)
        std::cout << "|";
     else if(check == 2)
        std::cout << std::endl;
}
int PhoneBook::_index = 0;