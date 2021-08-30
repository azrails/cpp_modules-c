#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <string.h>
# include <iostream>

class Contact
{
private:
    std::string _fname;
    std::string _lname;
    std::string _nname;
    std::string _login;
    std::string _postal;
    std::string _email;
    std::string _phone;
    std::string _birthday;
    std::string _meal;
    std::string _underwear;
    std::string _darksec;
    std::string _setwidth(std::string s);
public:
    void getcontact();
    void addtocontact();
    void sinfo(int i);
};

#endif