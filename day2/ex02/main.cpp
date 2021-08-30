#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int main(void)
{
    Zombie zomb1;
    ZombieEvent zombiehub;
    srand(time(0));

    std::cout << "_____________base zombie___________" << std::endl;
    zomb1.announce();
    zomb1.setName("Bick");
    zomb1.setType("wow");
    zomb1.announce();
    std::cout << std::endl <<"_____________zombie on event___________" << std::endl;
    std::cout << std::endl << "***************random zombie***********" << std::endl;
    Zombie *zomb2 = zombiehub.randomChump();
    delete zomb2;
    std::cout << std::endl << "***************new method zombie***********" << std::endl;
    Zombie *zomb3 = zombiehub.newZombie("Jojo");
    zomb3->announce();
    delete zomb3;
    std::cout << std::endl << "***************set new types zombie***********" << std::endl;
    zombiehub.setZombieType("legendary");
    std::cout << std::endl << "***************random zombie***********" << std::endl;
    zomb2 = zombiehub.randomChump();
    delete zomb2;
    std::cout << std::endl << "***************new method zombie***********" << std::endl;
    zomb3 = zombiehub.newZombie("Jojo");
    zomb3->announce();
    delete zomb3;
    return 0;
}