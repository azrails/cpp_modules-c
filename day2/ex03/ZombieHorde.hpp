#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
# include "Zombie.hpp"
# include <ctime>
# include <cstdlib>

class ZombieHorde
{
private:
    int _n;
    Zombie *_hord;
public:
    ZombieHorde(int n = 1);
    ~ZombieHorde();
    void announce();
};

#endif