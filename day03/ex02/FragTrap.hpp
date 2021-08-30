#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include"ClapTrap.hpp"

class FragTrap : public ClapTrap
{
public:
    FragTrap();
    FragTrap(std::string name);
    FragTrap(FragTrap const &fragtrap);
    FragTrap &operator=(FragTrap const &fragtrap);
    ~FragTrap();
    void vaulthunter_dot_exe(std::string const &target);
};

#endif