#include "Fixed.hpp"

Fixed::Fixed(): _value(0){
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed(){
    std::cout << "Distructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed){
    std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

int Fixed::getRawBits(void) const{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_value;
}

void Fixed::setRawBits(int const raw){
    std::cout << "setRawBits member function called" << std::endl;
    this->_value = raw;
}

Fixed& Fixed::operator=(Fixed const &fixed)
{
    std::cout << "Assignation operator called" << std::endl;
    if (&fixed != this)
    {
        this->_value = fixed.getRawBits();
    }
    return *this;
}