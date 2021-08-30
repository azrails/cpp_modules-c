#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>


class ClapTrap
{
protected:
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
    ClapTrap();
    ClapTrap(std::string name, int hit = 0, int max_hit = 0, int energy = 0, int max_energy = 0, 
                        int lvl = 0, int mdmg = 0, int rdmg = 0, int armor = 0);
    ClapTrap(ClapTrap const &claptrap);
    ClapTrap& operator=(ClapTrap const &claptrap);
    virtual ~ClapTrap();

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

    void takeDamage(unsigned int amount);
    void meleeAttack(std::string const &target);
    void rangedAttack(std::string const &target);
    void beRepaired(unsigned int amount);
};

#endif