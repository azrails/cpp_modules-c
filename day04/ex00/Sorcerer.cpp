#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{

}

Sorcerer::Sorcerer(std::string name, std::string title): _name(name), _title(title)
{
    std::cout << this->getName() << ", " << this->getTitle() << ", is born!" << std::endl;
}

Sorcerer& Sorcerer::operator=(Sorcerer const &sorcer){
    if (this != &sorcer)
    {
        this->_name = sorcer.getName();
        this->_title = sorcer.getTitle();
    }
    return *this;
}

Sorcerer::Sorcerer(Sorcerer const &sorcerer)
{
        *this = sorcerer;
        std::cout << this->getName() << ", " << this->getTitle() << ", is born!" << std::endl;
} 

Sorcerer::~Sorcerer()
{
    std::cout << this->getName() << ", " << this->getTitle() << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string Sorcerer::getName() const
{
    return this->_name;
}

std::string Sorcerer::getTitle() const
{
    return this->_title;
}

void Sorcerer::polymorph(Victim const &v) const{
    v.getPolymorphed();
}

std::ostream &operator<<(std::ostream &s, Sorcerer const &sorcer)
{
    s << "I am " << sorcer.getName() <<", " << sorcer.getTitle() 
                << ", and I like ponies!" << std::endl;
    return s;
}