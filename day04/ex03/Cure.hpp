#pragma once
#include "AMateria.hpp"


class Cure : public AMateria
{
    public:
        Cure();
        Cure(Cure const &a);
        Cure &operator=(Cure const &a);
        virtual ~Cure();
        
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};