#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
public:
    NinjaTrap();
    NinjaTrap(std::string name);
    NinjaTrap(NinjaTrap const &ninjatrap);
    NinjaTrap &operator=(NinjaTrap const &ninjatrap);
    ~NinjaTrap();

    void ninjaShoebox(FragTrap const &fragtrap) const;
    void ninjaShoebox(ScavTrap const &scavtrap) const;
    void ninjaShoebox(ClapTrap const &claptrap) const;
    void ninjaShoebox(NinjaTrap const &ninjatrap) const;
};

#endif