#pragma once
#include <string>
#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
    public:
        PowerFist();
        PowerFist(PowerFist const &pf);
        PowerFist &operator=(PowerFist const &pf);
        virtual ~PowerFist();
                
        virtual void attack() const;
};