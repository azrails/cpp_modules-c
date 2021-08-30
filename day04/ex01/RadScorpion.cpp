#include "RadScorpion.hpp"

RadScorpion::RadScorpion(): Enemy( 80 ,"RadScorpion"){
    std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const &s): Enemy(s){

}

RadScorpion &RadScorpion::operator=(RadScorpion const &s){
    if(this!= &s)
    {
        Enemy::operator=(s);
    }
    return *this;
}

RadScorpion::~RadScorpion(){
    std::cout << "* SPROTCH *" << std::endl;
}

void RadScorpion::takeDamage(int dmg){
    Enemy::takeDamage(dmg - 3);
}