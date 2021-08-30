#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int n): _n(n)
{
    if (this->_n <= 0)
        this->_n = 1;
    std::string names[15] = {"Javelin", "Azetek", "Savi", 
                                    "Nioh", "Ardun", "Alenvard", "Saken", "Saburo",
                                    "Akano", "Dimon", "Petya", "Sanya", "Saskeee",
                                    "Anton", "Volera"};
    this->_hord = new Zombie[this->_n];
    for (int i = 0; i < this->_n; i++)
    {
        this->_hord[i].setName(names[rand() % 15]);
    }
    std::cout << "-----HORD ATTACK start------" << std::endl;
}

ZombieHorde::~ZombieHorde()
{
    delete[] this->_hord;
    std::cout << "-----lol zombies died------" << std::endl;
}

void ZombieHorde::announce()
{
    for(int i = 0; i < this->_n; i++)
    {
        this->_hord[i].announce();
    }
}