#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int main(void)
{
    srand(time(0));
    
    std::cout << "**********************Heap Hord***************************"<<std::endl;
    ZombieHorde *horde = new ZombieHorde[5];
    for(int i = 0; i < 5; i++)
    horde[i].announce();
    delete[] horde;
    std::cout << "**********************Stack Hord**************************"<<std::endl;
    ZombieHorde hord(5);
    hord.announce();
    return 0;
}