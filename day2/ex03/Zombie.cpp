#include "Zombie.hpp"

std::string Zombie::getName()
{
    return this->_name;
}

std::string Zombie::getType()
{
    return this->_type;
}

void Zombie::announce()
{
    std::cout << '<' << getName() << " (" << getType() << ")>" <<" Braiiiiiiinnnssss..." << std::endl;
}

void Zombie::setName(std::string name)
{
    this->_name = name;
}

void Zombie::setType(std::string type) 
{
    this->_type = type;
}