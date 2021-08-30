#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(){
    std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const &at){
    std::cout <<  "* teleports from space *" << std::endl;
    *this = at;
}

AssaultTerminator &AssaultTerminator::operator=(AssaultTerminator const &at){
    if (this != &at)
    {
        
    }
    return *this;
}

AssaultTerminator::~AssaultTerminator(){
    std::cout <<  "I'll be back..." << std::endl;
}
    
ISpaceMarine* AssaultTerminator::clone() const{
    return new AssaultTerminator(*this);
}

void AssaultTerminator::battleCry() const{
    std::cout <<  "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
    std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
    std::cout <<  "* attacks with chainfists *" << std::endl;
}