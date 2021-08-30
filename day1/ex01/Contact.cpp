#include "Contact.hpp"
#include <iomanip>


void Contact::addtocontact()
{
    std::cout << "enter first name: ";
    std::cin >> this->_fname ;
    std::cout << "enter last name: ";
    std::cin >> this->_lname ;
    std::cout << "enter nickname: ";
    std::cin >> this->_nname ;
    std::cout << "enter login ";
    std::cin >> this->_login;
    std::cout << "enter postal address: ";
    std::cin >> this->_postal ;
    std::cout << "enter email address: ";
    std::cin >> this->_email ;
    std::cout << "enter phone number: ";
    std::cin >> this->_phone ;
    std::cout << "enter birthday date: ";
    std::cin >> this->_birthday ;
    std::cout << "enter favorite meal: ";
    std::cin >> this->_meal ;
    std::cout << "enter underwear color: ";
    std::cin >> this->_underwear ;
    std::cout << "enter darkest secret: ";
    std::cin >> this->_darksec ;
}

std::string Contact::_setwidth(std::string s)
{
    if (s.length() > 10)
        return (s.substr(0, 9) + ".");
    return (s);
}

void Contact::sinfo(int i)
{
    std::cout << std::setw(10) << i + 1 << '|' << 
        std::setw(10) << this->_setwidth(this->_fname) << '|' << 
        std::setw(10) << this->_setwidth(this->_lname) << '|' <<  
        std::setw(10) << this->_setwidth(this->_nname) << std::endl;   
}

void Contact::getcontact()
{
    std::cout << "first name: " << this->_fname << std::endl;
    std::cout << "last name: " << this->_lname << std::endl;
    std::cout << "nickname: " << this->_nname << std::endl;
    std::cout << "login " << this->_login << std::endl;
    std::cout << "postal address: " << this->_postal << std::endl;
    std::cout << "email address: " << this->_email << std::endl;
    std::cout << "phone number: " << this->_phone << std::endl;
    std::cout << "birthday date: " << this->_birthday << std::endl;
    std::cout << "favorite meal: " << this->_meal << std::endl;
    std::cout << "underwear color: " << this->_underwear << std::endl;
    std::cout << "darkest secret: " << this->_darksec << std::endl;
}