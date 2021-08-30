#include "Victim.hpp"

Victim::Victim()
{
    
}

Victim::Victim(std::string name): _name(name)
{
    std::cout << "Some random victim called " << this->getName() << " just appeared!" << std::endl;
}

Victim& Victim::operator=(Victim const &victim){
    if (this != &victim)
    {
        this->_name = victim.getName();
    }
    return *this;
}

Victim::Victim(Victim const &victim)
{
        *this = victim;
        std::cout << "Some random victim called " << this->getName() << " just appeared!" << std::endl;
} 

Victim::~Victim()
{
    std::cout << "Victim " << this->getName() << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const
{
    return this->_name;
}

void Victim::getPolymorphed() const{
    std::cout << this->getName() << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &operator<<(std::ostream &o, Victim const &v)
{
    o << "I'm " << v.getName() << " and I like otters!" << std::endl;
    return o;
}