#pragma once
#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character: public ICharacter
{
    private:
        AMateria *_inv[4];
        std::string _name;
        void getCopy(Character const &c);

    public:
        Character(std::string name = "Invoker");
        Character(Character const &c);
        Character &operator=(Character const &c);
        virtual ~Character();
        
        virtual std::string const & getName() const;
        
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};