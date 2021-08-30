#include"FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Unknown", 100, 100, 100, 100, 1, 30, 20, 5){
    std::cout << "robot woke up with amnesia" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5){
    std::cout << "robot " << name <<" woke up" << std::endl;
}

FragTrap::FragTrap(FragTrap const &fragtrap): ClapTrap(fragtrap){

}

FragTrap& FragTrap::operator=(FragTrap const &fragtrap){
    if(this != &fragtrap)
    {
        ClapTrap::operator=(fragtrap);
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "robot "<< this->getName() << " destroyed" << std::endl;
}

void FragTrap::vaulthunter_dot_exe(std::string const &target){
    int rnd = rand() % 5;
    std::cout<<std::endl << std::endl;


    if (this->getEnergy() < 25)
        std::cout << "No energy for cast" << std::endl;
    else{
            switch(rnd){
                case 0:
                    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                        this->getEnergy() << " Points of energy" << std::endl;
                    std::cout << this->getName() << " attacks " << target << " at One Shot Miracle perc " << std::endl;
                    break;
                case 1:
                    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                        this->getEnergy() << " Points of energy" << std::endl;
                    std::cout << this->getName() << " attacks " << target << " at Bomb from a snuff box perc "  << std::endl;
                    break;
                case 2:
                    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                        this->getEnergy() << " Points of energy" << std::endl;
                    std::cout << this->getName() << " attacks " << target << " at Wizard shooter perc"  << std::endl;
                    break;
                case 3:
                    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                        this->getEnergy() << " Points of energy" << std::endl;
                    std::cout << this->getName() << " attacks " << target << " at Pointless sacrifice perc "  << std::endl;
                    break;
                case 4:
                    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                        this->getEnergy() << " Points of energy" << std::endl;
                    std::cout << this->getName() << " attacks " << target << " at Shhhh ... ladder perc "  << std::endl;
                    break;
            }
            this->_energy -= 25;
    }
}