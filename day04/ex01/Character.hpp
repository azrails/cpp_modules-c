#pragma once
#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
    private:
        std::string _name;
        int _ap;
        AWeapon *_wp;
    public:
        Character(std::string const & name);
        Character(Character const &c);
        Character &operator=(Character const &c);
        ~Character();
        
        
        void recoverAP();
        void equip(AWeapon* wp);
        void attack(Enemy* enm);

        std::string const &getName() const;
        AWeapon const *getWeapon() const;
        int getAp() const;
};

std::ostream &operator<<(std::ostream &o, Character const &c);