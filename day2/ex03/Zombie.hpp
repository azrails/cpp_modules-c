#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>
# include <iostream>

class Zombie
{
    private:
        std::string _name;
        std::string _type;
    public:
        Zombie(std::string name = "John", std::string type = "common"): _name(name), _type(type) 
        {
        }
        ~Zombie()
        {
        }
        void setName(std::string name);
        void setType(std::string type);
        std::string getType();
        std::string getName();
        void announce();
};

#endif