#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(): AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::PlasmaRifle(PlasmaRifle const &pr): AWeapon(pr) 
{

}

PlasmaRifle &PlasmaRifle::operator=(PlasmaRifle const &pr){
    if (this != &pr)
    {
        AWeapon::operator=(pr);
    }
    return *this;
}

PlasmaRifle::~PlasmaRifle(){

}
                
void PlasmaRifle::attack() const{
    std::cout << "* piouuu piouuu piouuu *" << std::endl;
}