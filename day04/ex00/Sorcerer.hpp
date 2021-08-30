#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    Sorcerer();
    std::string _name;
    std::string _title;
public:
    Sorcerer(std::string name, std::string _title);
    Sorcerer(Sorcerer const &sorcer);
    Sorcerer &operator=(Sorcerer const &sorcer);
    ~Sorcerer();

    std::string getName() const;
    std::string getTitle() const;

    void polymorph(Victim const &) const;
};

std::ostream &operator<<(std::ostream &s, Sorcerer const &sorcer);