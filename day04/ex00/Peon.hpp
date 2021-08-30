#pragma once
#include <string>
#include <iostream>
#include "Victim.hpp"

class Peon : public Victim
{
private:
    Peon();
public:
    Peon(std::string name = "Genry");
    Peon(Peon const &peon);
    Peon &operator=(Peon const &peon);
    virtual ~Peon();

    virtual void getPolymorphed() const;
};