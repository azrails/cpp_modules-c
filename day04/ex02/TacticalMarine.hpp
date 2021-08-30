#pragma once
#include "ISpaceMarine.hpp"

class TacticalMarine : public ISpaceMarine
{
    private:
    public:
        TacticalMarine();
        TacticalMarine(TacticalMarine const &at);
        TacticalMarine &operator=(TacticalMarine const &at);
        virtual ~TacticalMarine();


        virtual ISpaceMarine* clone() const;
        virtual void battleCry() const;
        virtual void rangedAttack() const;
        virtual void meleeAttack() const;
};