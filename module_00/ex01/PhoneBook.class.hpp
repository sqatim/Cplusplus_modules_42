#ifndef PHONEBOOK_CLASS_HPP
#define PHONEBOOK_CLASS_HPP

#include <iostream>

class PhoneBook
{

    public:
    
    // PhoneBook();
    void addInformation(void);
    void searchInformation(PhoneBook instance);
    void printFields(PhoneBook phoneBook[]);
    void condition(std::string const& str, int check);

    private:
    
    std::string m_first_name; 
    std::string m_last_name;
    std::string m_nickname;
    std::string m_login;
    std::string m_postal_adress;
    std::string m_email_adress;
    int m_phone_number;
    std::string m_birthday_date;
    std::string m_favorite_meal;
    std::string m_underwear_color;
    std::string m_darkest_secret;
    static int _index;

};

#endif