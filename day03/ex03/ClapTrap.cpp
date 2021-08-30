#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _hit(100), _max_hit(100), _energy(100),  _max_energy(100),
                                    _lvl(1), _mdmg(50), _rdmg(100), _armor(20){
    this->_name = "ClapTrap";
    std::cout << "Hey Im ClapTrap" << std::endl;
    srand(time(NULL));
}

ClapTrap::ClapTrap(std::string name, int hit, int max_hit, int energy, int max_energy, 
                        int lvl, int mdmg, int rdmg, int armor): _hit(hit), _max_hit(max_hit), 
                        _energy(energy),  _max_energy(max_energy), _lvl(lvl),  _name(name), 
                        _mdmg(mdmg), _rdmg(rdmg), _armor(armor){
    std::cout << "ClapTrap named : " << name <<" come to party" << std::endl;
    srand(time(NULL));
}

ClapTrap::ClapTrap(ClapTrap const &claptrap){
    std::cout << "ClapTrap "<< claptrap.getName() << " copied" << std::endl;
    *this = claptrap;
    std::cout << this->getName() << " has "<< this->getHit() << " HP : " << 
            this->getEnergy() << " Points of energy" << std::endl;
    srand(time(NULL));
}

ClapTrap& ClapTrap::operator=(ClapTrap const &claptrap){
    if(this != &claptrap)
    {
        this->_armor = claptrap.getArmor();
        this->_hit = claptrap.getHit();
        this->_max_hit = claptrap.getMaxHit();
        this->_energy = claptrap.getEnergy();
        this->_max_energy = claptrap.getMaxEnergy();
        this->_lvl = claptrap.getLvl();
        this->_mdmg = claptrap.getMdmg();
        this->_rdmg = claptrap.getRdmg();
        this->_name = claptrap.getName();
    }
    std::cout << "ClapTrap equated settings" << std::endl;
    std::cout << this->getName() << " has "<<this->getHit() << " HP : " << this->getEnergy() << " Points of energy" << std::endl;
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap "<< this->getName() << " destroyed" << std::endl;
}

int ClapTrap::getArmor() const{
    return this->_armor;
}

int ClapTrap::getHit() const{
    return this->_hit;
}

int ClapTrap::getMaxHit() const{
    return this->_max_hit;
}

int ClapTrap::getEnergy() const{
    return this->_energy;
}

int ClapTrap::getMaxEnergy() const{
    return this->_max_energy;
}

int ClapTrap::getLvl() const{
    return this->_lvl;
}

int ClapTrap::getMdmg() const{
    return this->_mdmg;
}

int ClapTrap::getRdmg() const{
    return this->_rdmg;
}

std::string ClapTrap::getName() const{
    return this->_name;
}

void ClapTrap::setHit(int hit){
    this->_hit = hit;
}

void ClapTrap::setName(std::string name){
    this->_name = name;
}
void ClapTrap::rangedAttack(std::string const &target){
    std::cout<< this->getName() << " has " <<this->getHit() << " HP : " << 
                this->getEnergy() << " Points of energy" << std::endl;
    std::cout << "robot " << this->getName() << " attacks " << 
                target << " at range, causing " << this->getRdmg() << 
                " points of damage!" << std::endl;
}

void ClapTrap::meleeAttack(std::string const &target){
    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                this->getEnergy() << " Points of energy" << std::endl;
    std::cout << "robot " << this->getName() << " attacks " << 
                target << " at melee, causing " << this->getMdmg() << 
                " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    std::cout << this->getName() << " has " << this->getHit() << " HP : " << 
                this->getEnergy() << " Points of energy" << " is under attack !" << std::endl;
    if (amount <= this->getArmor() && amount > 0)
    {
        std::cout << "Blocked damage " << amount << std::endl;
        return;
    }
    if (amount < 0)
    {
        std::cout << "Damage dodged" << amount << std::endl;
        return;
    }
    amount -= this->getArmor();
    if (amount >= this->getHit())
    {
        std::cout << "Wow " << this->getName() << " went to the wrong area , it at death's door"<< std::endl;
        this->setHit(0);
        std::cout << this->getName() << " has " << this->getHit() << " HP" << std::endl;
    }
    else{
        std::cout << this->getName() << " received " << amount << " damage" << std::endl;
        this->setHit(this->getHit() - amount);
        std::cout << this->getName() << " has " << this->getHit() << " HP" << std::endl;
        return;
    }
}

void ClapTrap::beRepaired(unsigned int amount){
    std::cout << this->getName() << " has " << this->getHit() << " HP : " << 
                this->getEnergy() << " Points health" << " is repaired !" << std::endl;
    if (amount >= this->getMaxHit() || amount + this->getHit() > this->getMaxHit()){
        this->setHit(this->getMaxHit());
    }
    else{
        this->setHit(this->getHit() + amount);
    }
    std::cout << this->getName() << " has " << this->getHit() << " HP" << std::endl;
}