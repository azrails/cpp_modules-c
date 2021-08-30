#include "AWeapon.hpp"

AWeapon::AWeapon(std::string const & name, int apcost, int damage): _name(name),
                    _apcost(apcost), _dmg(damage)
{

}

AWeapon::AWeapon(AWeapon const &wp)
{
    *this = wp;
}

AWeapon &AWeapon::operator=(AWeapon const &wp){
    if (this != &wp)
    {
        this->_name = wp.getName();
        this->_dmg = wp.getDamage();
        this->_apcost = wp.getAPCost();
    }
    return *this;
}

AWeapon::~AWeapon()
{

}

std::string const &AWeapon::getName() const{
    return this->_name;
}

int AWeapon::getAPCost() const{
    return this->_apcost;
}

int AWeapon::getDamage() const{
    return this->_dmg;
}