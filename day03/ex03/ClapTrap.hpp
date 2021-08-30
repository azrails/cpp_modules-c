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
    ClapTrap(std::string name, int hit, int max_hit, int energy, int max_energy, 
                        int lvl, int mdmg, int rdmg, int armor);
    ClapTrap(ClapTrap const &claptrap);
    ClapTrap& operator=(ClapTrap const &claptrap);
    ~ClapTrap();

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