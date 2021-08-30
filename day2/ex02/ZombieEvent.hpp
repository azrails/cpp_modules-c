#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
# include <string>
# include <iostream>
# include "Zombie.hpp"
# include <cstdlib>
# include <ctime>

class ZombieEvent
{
private:
    std::string _type;
public:
    ZombieEvent(std::string type = ""): _type(type)
    {
    }
    ~ZombieEvent()
    {
    }
    void setZombieType(std::string type);
    Zombie* newZombie(std::string name);
    Zombie* randomChump();
};

#endif