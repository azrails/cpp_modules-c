#include"NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap("Ninja", 60, 60, 120,  120, 
                                    1, 60, 5, 0){
    std::cout << "Ninja is here" << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name, 60, 60, 120,  120, 
                                    1, 60, 5, 0){
    std::cout << "Ninja " << name <<" start follow" << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const &ninjatrap): ClapTrap(ninjatrap){

}

NinjaTrap& NinjaTrap::operator=(NinjaTrap const &ninjatrap){
    if(this != &ninjatrap)
    {
        ClapTrap::operator=(ninjatrap);
    }
    return *this;
}

NinjaTrap::~NinjaTrap(){
    std::cout << "Ninja , "<<this->getName() <<" out of thise area" << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap const &fragtrap) const{
    std::cout << this->getName() << " use sharingan on " << fragtrap.getName() << " FragTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap const &scavtrap) const{
    std::cout << this->getName() << " helps to set traps " << scavtrap.getName() << " ScavTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(ClapTrap const &claptrap) const{
    std::cout << this->getName() << " salutes the master " << claptrap.getName() << " ClapTrap" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap const &ninjatrap) const{
    std::cout << this->getName() << " find friend " << ninjatrap.getName() << " NinjaTrap" << std::endl;
}