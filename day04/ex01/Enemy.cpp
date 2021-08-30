#include "Enemy.hpp"

Enemy::Enemy(int hp, std::string const & type): _hp(hp), _type(type){

}

Enemy::Enemy(Enemy const &e){
    *this = e;
}

Enemy &Enemy::operator=(Enemy const &e){
    if(this!= &e)
    {
        this->_type = e.getType();
        this->_hp = e.getHP();
    }
    return *this;
}

Enemy::~Enemy(){

}
        
std::string const &Enemy::getType() const{
    return this->_type;
}

int Enemy::getHP() const{
    return this->_hp;
}
        
void Enemy::takeDamage(int dmg){
    if (dmg < 0)
        return ;
    //std::cout << "Enemy " << this->getType() << " take a " << dmg << " damage!" << std::endl;
    if (dmg > this->getHP())
        dmg = this->getHP();
    this->_hp = this->getHP() - dmg;
    //if (this->getHP() <= 0)
        //std::cout << "Enemy " << this->getType() << " is dead!" << std::endl;
    //else
        //std::cout << "Enemy has " << this->getHP() << " hp." << std::endl;
}