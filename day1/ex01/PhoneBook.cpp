#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->_length = 0;
}

void PhoneBook::addcontact()
{
    if (this->_length == 8)
        std::cout << "Phonebook is full" << std::endl;
    else{
        Contact contact;
        contact.addtocontact();
        this->_contacts[_length] = contact;
        this->_length++;
    }
}

void PhoneBook::searchcontact()
{
    if (this->_length == 0)
        std::cout << "NO CONTACTS" << std::endl;
    else{
            this->_printlist();
            this->_getcontact();
    }   
}

void PhoneBook::_printlist()
{
    std::cout << std::setw(10) << "index" << '|' << 
    std::setw(10) << "first name" << '|' <<
    std::setw(10) << "last name" << '|' <<
    std::setw(10) << "nickname" << std::endl;

    for (int i = 0; i < this->_length; i++)
        this->_contacts[i].sinfo(i);
}

void PhoneBook::_getcontact()
{
    int i;
    std::cout << "Enter index" << std::endl;
    std::cin >> i;
    if (std::cin.fail())
    {
        std::cin.clear();
        std::cin.ignore();
        std::cout << "WRONG INPUT";
        return;
    }
    if (i < 1 || i > this->_length)
        std::cout << "WRONG INDEX";
    else
        this->_contacts[i - 1].getcontact();
}