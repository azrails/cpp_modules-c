#include "SuperMutant.hpp"

SuperMutant::SuperMutant(): Enemy( 170 ,"Super Mutant"){
    std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const &s): Enemy(s){

}

SuperMutant &SuperMutant::operator=(SuperMutant const &s){
    if(this!= &s)
    {
        Enemy::operator=(s);
    }
    return *this;
}

SuperMutant::~SuperMutant(){
    std::cout << "Aaargh..." << std::endl;
}

void SuperMutant::takeDamage(int dmg){
    Enemy::takeDamage(dmg - 3);
}