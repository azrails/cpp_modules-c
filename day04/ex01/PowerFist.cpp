#include "PowerFist.hpp"

PowerFist::PowerFist(): AWeapon("Power Fist", 8, 50)
{

}

PowerFist::PowerFist(PowerFist const &pf): AWeapon(pf){

}

PowerFist &PowerFist::operator=(PowerFist const &pf){
    if (this != &pf)
    {
        AWeapon::operator=(pf);
    }
    return *this;
}

PowerFist::~PowerFist(){

}

void PowerFist::attack() const{
    std::cout << "* pschhh... SBAM! *" << std::endl;
}