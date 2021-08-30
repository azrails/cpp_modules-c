#ifndef PONY_HPP
# define PONY_HPP
# include <string>
# include <iostream>

class Pony
{
private:
    std::string _name;
    int _weight;
    int _height;
    int _speed;
public:
    Pony(std::string name = "meepo", int weight = 0, 
            int height = 0, int speed = 0): _name(name), _weight(weight),
            _height(height), _speed(speed)
            {
            }
    void PonyInfo();
    ~Pony()
    {
    }
};
#endif