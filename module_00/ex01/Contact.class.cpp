#include "Contact.class.hpp"

void Contact::addInformation(void)
{
    //  cin.ignore va permettre d'ignorer ce que le buffer de cin contient.
    std::cin.ignore();
    std::cout << "first name : ";
    getline(std::cin,m_first_name);
    std::cout << "last name : ";
    getline(std::cin,m_last_name);

    std::cout << "nickname : ";
    getline(std::cin,m_nickname);

    std::cout << "login : ";
    getline(std::cin,m_login);

    std::cout << "postal adress : ";
    getline(std::cin,m_postal_adress);

    std::cout << "email adress : ";
    getline(std::cin,m_email_adress);

    std::cout << "phone number : ";
    getline(std::cin,m_phone_number);

    std::cout << "birthday date : ";
    getline(std::cin,m_birthday_date);

    std::cout << "favorite meal : ";
    getline(std::cin,m_favorite_meal);

    std::cout << "underwear color : ";
    getline(std::cin,m_underwear_color);

    std::cout << "darkest secret : ";
    getline(std::cin,m_darkest_secret);

    Contact::_index++;
}

void Contact::printFields(Contact Contact[])
{
    for(int i = 0; i < _index; i++)
    {
        std::cout << i << "|";
        condition(Contact[i].m_first_name, 1);
        condition(Contact[i].m_last_name, 1);
        condition(Contact[i].m_nickname, 2);
    }
}

void Contact::condition(std::string const& str, int check)
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

std::string Contact::get_firstName()
{
    return (this->m_first_name);
}

std::string Contact::get_lastName()
{
    return (this->m_last_name);
}

std::string Contact::get_nickname()
{
    return (this->m_nickname);
}

std::string Contact::get_login()
{
    return (this->m_login);
}

std::string Contact::get_postalAdress()
{
    return (this->m_postal_adress);
}

std::string Contact::get_emailAdress()
{
    return (this->m_email_adress);
}

std::string Contact::get_phoneNumber()
{
    return (this->m_phone_number);
}

std::string Contact::get_birthdatDate()
{
    return (this->m_birthday_date);
}

std::string Contact::get_favoriteMeal()
{
    return (this->m_favorite_meal);
}

std::string Contact::get_underwearColor()
{
    return (this->m_underwear_color);
}

std::string Contact::get_darkestSecret()
{
    return (this->m_darkest_secret);
}

int Contact::_index = 0;