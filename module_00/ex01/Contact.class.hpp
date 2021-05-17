#ifndef Contact_CLASS_HPP
#define Contact_CLASS_HPP

#include <iostream>
#include <iomanip>

class Contact
{

    public:
    
    void addInformation(void);
    void printFields(Contact Contact[]);
    void condition(std::string str, int check);
    std::string get_firstName();
    std::string get_lastName();
    std::string get_nickname();
    std::string get_login();
    std::string get_postalAdress();
    std::string get_emailAdress();
    std::string get_phoneNumber();
    std::string get_birthdatDate();
    std::string get_favoriteMeal();
    std::string get_underwearColor();
    std::string get_darkestSecret();

    private:
    
    std::string m_first_name; 
    std::string m_last_name;
    std::string m_nickname;
    std::string m_login;
    std::string m_postal_adress;
    std::string m_email_adress;
    std::string m_phone_number;
    std::string m_birthday_date;
    std::string m_favorite_meal;
    std::string m_underwear_color;
    std::string m_darkest_secret;
    static int _index;

};

#endif