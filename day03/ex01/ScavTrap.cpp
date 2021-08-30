#include"ScavTrap.hpp"

ScavTrap::ScavTrap(): _hit(100), _max_hit(100), _energy(50),  _max_energy(50), 
                                    _lvl(1), _mdmg(20), _rdmg(15), _armor(3){
    this->_name = "Unnamed";
    std::cout << "Unnamed door defender awake" << std::endl;
    srand(time(NULL));
}

ScavTrap::ScavTrap(std::string name): _hit(100), _max_hit(100), _energy(50),  _max_energy(50), 
                                    _lvl(1),  _name(name), _mdmg(20), _rdmg(15), _armor(3){
    std::cout << "door defender " << name <<" created" << std::endl;
    srand(time(NULL));
}

ScavTrap::ScavTrap(ScavTrap const &scavtrap){
    std::cout << "defender "<< scavtrap.getName() << " copied" << std::endl;
    *this = scavtrap;
    std::cout << this->getName() << " has "<< this->getHit() << " HP : " << 
            this->getEnergy() << " Points of energy" << std::endl;
    srand(time(NULL));
}

ScavTrap& ScavTrap::operator=(ScavTrap const &scavtrap){
    if(this != &scavtrap)
    {
        this->_armor = scavtrap.getArmor();
        this->_hit = scavtrap.getHit();
        this->_max_hit = scavtrap.getMaxHit();
        this->_energy = scavtrap.getEnergy();
        this->_max_energy = scavtrap.getMaxEnergy();
        this->_lvl = scavtrap.getLvl();
        this->_mdmg = scavtrap.getMdmg();
        this->_rdmg = scavtrap.getRdmg();
        this->_name = scavtrap.getName();
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "Door destroyed , defender "<< this->getName() <<" gone" << std::endl;
}

int ScavTrap::getArmor() const{
    return this->_armor;
}

int ScavTrap::getHit() const{
    return this->_hit;
}

int ScavTrap::getMaxHit() const{
    return this->_max_hit;
}

int ScavTrap::getEnergy() const{
    return this->_energy;
}

int ScavTrap::getMaxEnergy() const{
    return this->_max_energy;
}

int ScavTrap::getLvl() const{
    return this->_lvl;
}

int ScavTrap::getMdmg() const{
    return this->_mdmg;
}

int ScavTrap::getRdmg() const{
    return this->_rdmg;
}

std::string ScavTrap::getName() const{
    return this->_name;
}

void ScavTrap::setHit(int hit){
    this->_hit = hit;
}

void ScavTrap::setName(std::string name){
    this->_name = name;
}

void ScavTrap::rangedAttack(std::string const &target){
    std::cout<< this->getName() << " has " <<this->getHit() << " HP : " << 
                this->getEnergy() << " Points of energy" << std::endl;
    std::cout << "robot " << this->getName() << " attacks " << 
                target << " at range, causing " << this->getRdmg() << 
                " points of damage!" << std::endl;
}

void ScavTrap::meleeAttack(std::string const &target){
    std::cout << this->getName() << " has " <<this->getHit() << " HP : " << 
                this->getEnergy() << " Points of energy" << std::endl;
    std::cout << "robot " << this->getName() << " attacks " << 
                target << " at melee, causing " << this->getMdmg() << 
                " points of damage!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount){
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

void ScavTrap::beRepaired(unsigned int amount){
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