#pragma once
#include <string>
#include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
    public:
        PlasmaRifle();
        PlasmaRifle(PlasmaRifle const &pr);
        PlasmaRifle &operator=(PlasmaRifle const &pr);
        virtual ~PlasmaRifle();
                
        virtual void attack() const;
};