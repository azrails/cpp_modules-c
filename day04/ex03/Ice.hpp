#pragma once
#include "AMateria.hpp"


class Ice : public AMateria
{
    public:
        Ice();
        Ice(Ice const &a);
        Ice &operator=(Ice const &a);
        virtual ~Ice();

        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};