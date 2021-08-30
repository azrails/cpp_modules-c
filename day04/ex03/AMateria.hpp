#pragma once
#include "ICharacter.hpp"


class AMateria
{
    private:
        unsigned int _xp;
        std::string _type;

    public:
        AMateria(std::string const & type);
        AMateria(AMateria const &a);
        AMateria &operator=(AMateria const &a);
        virtual ~AMateria();
        
        std::string const & getType() const;
        unsigned int getXP() const;
        
        virtual AMateria* clone() const = 0;
        virtual void use(ICharacter& target);
};