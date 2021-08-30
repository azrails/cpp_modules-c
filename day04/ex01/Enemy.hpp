#pragma once
#include <string>
#include <iostream>

class Enemy
{
    protected:
        int _hp;
        std::string _type;

    public:
        Enemy(int hp, std::string const & type);
        Enemy(Enemy const &e);
        Enemy &operator=(Enemy const &e);
        virtual ~Enemy();
        
        std::string const &getType() const;
        int getHP() const;
        
        virtual void takeDamage(int);
};