#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
    private:
        int     _length;
        Contact _contacts[8];
        void    _printlist();
        void    _getcontact();
    public:
        PhoneBook();
        void    addcontact();
        void    searchcontact();
};

#endif