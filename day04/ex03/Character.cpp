#include "Character.hpp"

Character::Character(std::string name): _name(name){
    for (int i = 0; i < 4; i++)
        this->_inv[i] = NULL;
}

Character::Character(Character const &c){
    *this = c;
}
Character &Character::operator=(Character const &c){
    if (this != &c)
    {
        this->_name = c._name;
        for (int i = 0; i < 4; i++)
        {
            if(this->_inv[i] != NULL)
                delete this->_inv[i];
                this->_inv[i] = NULL;
        }
        this->getCopy(c);
    }
    return *this;
}

Character::~Character(){
        for (int i = 0; i < 4; i++)
        {
            if(this->_inv[i] != NULL)
                delete this->_inv[i];
                this->_inv[i] = NULL;
        }
}
        
void Character::getCopy(Character const &c)
{
    for (int i = 0; i < 4; i++)
    {
        if (c._inv[i] != NULL)
            this->_inv[i] = c._inv[i]->clone();
        else
            this->_inv[i] = NULL;
    }
}

std::string const & Character::getName() const{
    return this->_name;
}
        
void Character::equip(AMateria* m){
    int i;
    for (i = 0; i < 4 && this->_inv[i] != NULL; i++);
    if (i < 4)
        this->_inv[i] = m;
}

void Character::unequip(int idx){
    if (idx < 4 && idx >= 0)
        this->_inv[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
 if (idx < 4 && idx >= 0)
        this->_inv[idx]->use(target);
}