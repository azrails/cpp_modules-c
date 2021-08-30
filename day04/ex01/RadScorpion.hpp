#pragma once
#include <string>
#include "Enemy.hpp"

class RadScorpion : public Enemy
{
    public:
        RadScorpion();
        RadScorpion(RadScorpion const &s);
        RadScorpion &operator=(RadScorpion const &s);
        virtual ~RadScorpion();
        
        virtual void takeDamage(int);
};