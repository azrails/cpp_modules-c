#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class ScavTrap
{
private:
    int _hit;
    int _max_hit;
    int _energy;
    int _max_energy;
    int _lvl;
    std::string _name;
    int _mdmg;
    int _rdmg;
    int _armor;
public:
    ScavTrap();
    ScavTrap(std::string name);
    ScavTrap(ScavTrap const &scavtrap);
    ScavTrap &operator=(ScavTrap const &scavtrap);
    ~ScavTrap();

    int getArmor() const;
    int getHit() const;
    int getMaxHit() const;
    int getEnergy() const;
    int getMaxEnergy() const;
    int getLvl() const;
    int getMdmg() const;
    int getRdmg() const;
    std::string getName() const;

    void setHit(int hit);
    void setName(std::string name);

    void rangedAttack(std::string const &target);
    void meleeAttack(std::string const &target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
    void challengeNewcomer(std::string const &target);
};

#endif