#include"ScavTrap.hpp"

ScavTrap::ScavTrap(): ClapTrap("Unnamed", 100, 100, 50,  50, 
                                    1, 20, 15, 3){
    std::cout << "Unnamed door defender awake" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 100, 50,  50, 
                                    1, 20, 15, 3){
    std::cout << "door defender " << name <<" created" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap): ClapTrap(scavtrap){

}

ScavTrap& ScavTrap::operator=(ScavTrap const &scavtrap){
    if(this != &scavtrap)
    {
        ClapTrap::operator=(scavtrap);
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "Door destroyed , "<<this->getName() <<" defender gone" << std::endl;
}

void ScavTrap::challengeNewcomer(std::string const &target){
    int rnd = rand() % 7;
    std::string challanges[7] = {"Throw out the trash with", "Clear the shop with", "hit a neighbor"
                                "put bricks in the den of evil with", "bury evidence with", "lazy with", 
                                "play hide and seek with"};

    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                        this->getEnergy() << " Points of energy" << std::endl;
    if (this->getEnergy() < 25)
        std::cout << "resting today" << std::endl;
    else
    {
        std::cout << "Defender choose " << challanges[rnd] << " " <<target << " WoW!" << std::endl;
        this->_energy -= 25;
    }
}