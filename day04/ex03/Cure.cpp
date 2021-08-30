#include "Cure.hpp"

Cure::Cure(): AMateria("cure"){

}

Cure::Cure(Cure const &a): AMateria("cure"){
    *this = a;
}

Cure &Cure::operator=(Cure const &a){
    if (this != &a)
    {
        AMateria::operator=(a);
    }
    return *this;
}

Cure::~Cure(){

}

AMateria* Cure::clone() const{
    return new Cure(*this);
}

void Cure::use(ICharacter& target){
    AMateria::use(target);
    std::cout << "* heals " << target.getName() <<"’s wounds *" << std::endl;
}