#include "Brain.hpp"

Brain::Brain()
{

}

Brain::~Brain()
{

}

std::string Brain::identify()
{
    std::stringstream adr;

    adr << std::hex << this;
    return adr.str();
}
