#include"SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap("BOSS", 100, 100, 120, 120, 1, 60, 20, 5), FragTrap(), NinjaTrap(){
    std::cout << "Super trap come" << std::endl;

}

SuperTrap::SuperTrap(std::string name): ClapTrap(name, 100, 100, 120, 120, 1,60, 20, 5), FragTrap(name), NinjaTrap(name){
    std::cout << "BOSS OF THE GYM " << name <<" COME" << std::endl;
    std::cout << "STATS: hit : " << this->getHit() << " | max_hit : " << this->getMaxHit() << 
            " | energy : " << this->getEnergy() << " | mas_energy : " << this->getMaxEnergy() << 
            " | lvl : " << this->getLvl() << " | melee attack dmg : " << this->getMdmg() << 
            " | range attack dmg : " << this->getRdmg() << " | armor : " << this->getArmor() << std::endl; 
}

SuperTrap::SuperTrap(SuperTrap const &supertrap): ClapTrap(supertrap), 
                        FragTrap(supertrap), NinjaTrap(supertrap){

}

SuperTrap& SuperTrap::operator=(SuperTrap const &supertrap){
    if(this != &supertrap)
    {
        ClapTrap::operator=(supertrap);
    }
    return *this;
}

SuperTrap::~SuperTrap(){
    std::cout << "BOSS OF THE GYM "<< this->getName() << " get 300 BUCKS" << std::endl;
}