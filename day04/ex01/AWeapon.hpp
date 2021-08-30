#pragma once
#include <string>
#include <iostream>

class AWeapon
{
    private:
        std::string _name;
        int _apcost;
        int _dmg;
    public:
        AWeapon(std::string const & name, int apcost, int damage);
        AWeapon(AWeapon const &wp);
        AWeapon &operator=(AWeapon const &wp);
        virtual ~AWeapon();
        
        std::string const &getName() const;
        int getAPCost() const;
        int getDamage() const;
        
        virtual void attack() const = 0;
};