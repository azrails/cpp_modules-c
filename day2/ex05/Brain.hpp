#ifndef BRAIN_HPP
# define BRAIN_HPP
# include <string>
# include <iostream>
# include <sstream>

class Brain
{
    private:
        int _age;
    public:
        Brain();
        ~Brain();
        std::string identify();
};

#endif