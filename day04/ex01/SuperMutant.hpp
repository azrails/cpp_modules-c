#pragma once
#include <string>
#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    public:
        SuperMutant();
        SuperMutant(SuperMutant const &s);
        SuperMutant &operator=(SuperMutant const &s);
        virtual ~SuperMutant();
        
        virtual void takeDamage(int);
};