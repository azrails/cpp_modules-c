#include "AMateria.hpp"

AMateria::AMateria(std::string const & type): _xp(0), _type(type) {

}

AMateria::AMateria(AMateria const &a){
    *this = a;
}
AMateria &AMateria::operator=(AMateria const &a){
    if (this != &a)
    {
        this->_xp = a._xp;
        this->_type = a._type;
    }
    return *this;
}

AMateria::~AMateria(){

}
        
std::string const & AMateria::getType() const{
    return this->_type;
}
        
unsigned int AMateria::getXP() const{
    return this->_xp;
}
        
void AMateria::use(ICharacter& target){
    this->_xp += 10;
} 