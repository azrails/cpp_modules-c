#include "ZombieEvent.hpp"

Zombie* ZombieEvent::randomChump()
{
    std::string rand_name[7] = {"Javelin", "Azetek", "Savi", 
                                    "Nioh", "Ardun", "Alenvard", "Saken"};
    
    Zombie *ret = new Zombie(rand_name[rand() % 7],this->_type);
    ret->announce();
    return ret;
}

void ZombieEvent::setZombieType(std::string type)
{
    this->_type = type;
}
    
Zombie* ZombieEvent::newZombie(std::string name)
{
    Zombie *ret = new Zombie(name, this->_type);

    return ret;
}
