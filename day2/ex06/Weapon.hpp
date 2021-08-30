#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>
# include <iostream>

class Weapon
{
private:
    std::string _type;
public:
    Weapon(std::string type = "");
    ~Weapon();
    std::string const &getType();
    void setType(std::string s);
};

#endif