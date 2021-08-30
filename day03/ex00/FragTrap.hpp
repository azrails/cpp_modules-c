#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <string>
# include <cstdlib>
# include <ctime>

class FragTrap
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
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &fragtrap);
    FragTrap &operator=(FragTrap const &fragtrap);
    ~FragTrap();

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
    void vaulthunter_dot_exe(std::string const &target);
};

#endif