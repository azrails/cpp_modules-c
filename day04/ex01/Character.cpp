#include "Character.hpp"

Character::Character(std::string const & name): _name(name), _ap(40), _wp(NULL){

}

Character::Character(Character const &c){
    *this = c;
}

Character &Character::operator=(Character const &c){
    if(this != &c)
    {
        this->_name = c._name;
        this->_ap = c._ap;
        this->_wp = c._wp;
    }
    return *this;
}

Character::~Character(){

}
        
void Character::recoverAP(){
    this->_ap += 10;
    if (this->_ap > 40)
        this->_ap = 40;
}

void Character::equip(AWeapon* wp){
    this->_wp = wp;
}

void Character::attack(Enemy* enm){
    if(!this->_wp)
        return ;
    if (this->_ap < this->_wp->getAPCost())
    {
        std::cout << "NO AP FOR ATTACK" << std::endl;
        return ;
    }
    std::cout << this->getName() << " attacks " << enm->getType() << " with a " << 
                this->_wp->getName() << std::endl;
    this->_ap -= this->_wp->getAPCost();
    this->_wp->attack();
    enm->takeDamage(this->_wp->getDamage());
    if(enm->getHP() == 0)
        delete enm;
}

std::string const &Character::getName() const{
    return this->_name;
}

int Character::getAp() const{
    return this->_ap;
}

AWeapon const *Character::getWeapon() const{
    return this->_wp;
}

std::ostream &operator<<(std::ostream &o, Character const &c)
{
    o << c.getName() << " has " << c.getAp() << " AP and ";
    if (c.getWeapon() != NULL)
        o << "wields a " << c.getWeapon()->getName() << std::endl;
    else
        o << "is unarmed" << std::endl;
    return o;
}