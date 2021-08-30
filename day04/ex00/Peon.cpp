#include "Peon.hpp"

Peon::Peon()
{

}

Peon::Peon(std::string name): Victim(name)
{
    std::cout << "Zog zog." << std::endl;
}

Peon& Peon::operator=(Peon const &peon){
    if (this != &peon)
    {
        Victim::operator=(peon);
    }
    return *this;
}

Peon::Peon(Peon const &peon) : Victim(peon)
{
        std::cout << "Zog zog." << std::endl;
} 

Peon::~Peon()
{
    std::cout << "Bleuark..." << std::endl;
}

void Peon::getPolymorphed() const{
    std::cout << this->getName() << " has been turned into a pink pony!" << std::endl;
}
