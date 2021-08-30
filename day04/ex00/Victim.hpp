#pragma once
#include <string>
#include <iostream>

class Victim
{
private:
    std::string _name;
protected:
    Victim();
public:
    Victim(std::string name);
    Victim(Victim const &victim);
    Victim &operator=(Victim const &victim);
    virtual ~Victim();

    std::string getName() const;

    virtual void getPolymorphed() const;
};

std::ostream &operator<<(std::ostream &o, Victim const &v);