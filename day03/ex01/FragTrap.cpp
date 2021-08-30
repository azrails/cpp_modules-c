#include"FragTrap.hpp"

FragTrap::FragTrap(): _hit(100), _max_hit(100), _energy(100),  _max_energy(100), 
                                    _lvl(1), _mdmg(30), _rdmg(20), _armor(5){
    this->_name = "Unknown";
    std::cout << "robot Unknown woke up with amnesia" << std::endl;
    srand(time(NULL));
}

FragTrap::FragTrap(std::string name): _hit(100), _max_hit(100), _energy(100),  _max_energy(100), 
                                    _lvl(1),  _name(name), _mdmg(30), _rdmg(20), _armor(5){
    std::cout << "robot " << name <<" woke up" << std::endl;
    srand(time(NULL));
}

FragTrap::FragTrap(FragTrap const &fragtrap){
    std::cout << "robot "<< fragtrap.getName() << " copied" << std::endl;
    *this = fragtrap;
    std::cout << this->getName() << " has "<< this->getHit() << " HP : " << 
            this->getEnergy() << " Points of energy" << std::endl;
    srand(time(NULL));
}

FragTrap& FragTrap::operator=(FragTrap const &fragtrap){
    if(this != &fragtrap)
    {
        this->_armor = fragtrap.getArmor();
        this->_hit = fragtrap.getHit();
        this->_max_hit = fragtrap.getMaxHit();
        this->_energy = fragtrap.getEnergy();
        this->_max_energy = fragtrap.getMaxEnergy();
        this->_lvl = fragtrap.getLvl();
        this->_mdmg = fragtrap.getMdmg();
        this->_rdmg = fragtrap.getRdmg();
        this->_name = fragtrap.getName();
    }
    std::cout << "robot equated settings" << std::endl;
    std::cout << this->getName() << " has "<<this->getHit() << " HP : " << this->getEnergy() << " Points of energy" << std::endl;
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "robot " << this->getName() <<" destroyed" << std::endl;
}

int FragTrap::getArmor() const{
    return this->_armor;
}

int FragTrap::getHit() const{
    return this->_hit;
}

int FragTrap::getMaxHit() const{
    return this->_max_hit;
}

int FragTrap::getEnergy() const{
    return this->_energy;
}

int FragTrap::getMaxEnergy() const{
    return this->_max_energy;
}

int FragTrap::getLvl() const{
    return this->_lvl;
}

int FragTrap::getMdmg() const{
    return this->_mdmg;
}

int FragTrap::getRdmg() const{
    return this->_rdmg;
}

std::string FragTrap::getName() const{
    return this->_name;
}

void FragTrap::setHit(int hit){
    this->_hit = hit;
}

void FragTrap::setName(std::string name){
    this->_name = name;
}

void FragTrap::rangedAttack(std::string const &target){
    std::cout<< this->getName() << " has " <<this->getHit() << " HP : " << 
                this->getEnergy() << " Points of energy" << std::endl;
    std::cout << "robot " << this->getName() << " attacks " << 
                target << " at range, causing " << this->getRdmg() << 
                " points of damage!" << std::endl;
}

void FragTrap::meleeAttack(std::string const &target){
    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                this->getEnergy() << " Points of energy" << std::endl;
    std::cout << "robot " << this->getName() << " attacks " << 
                target << " at melee, causing " << this->getMdmg() << 
                " points of damage!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount){
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

void FragTrap::beRepaired(unsigned int amount){
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