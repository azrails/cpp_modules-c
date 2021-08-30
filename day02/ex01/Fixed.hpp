#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>
# include <cmath>

class Fixed
{
private:
    int _value;
    static const int _bits = 8;
public:
    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed &fixed);
    int getRawBits(void) const;
    void setRawBits(int const raw);
    Fixed& operator=(const Fixed &fixed);
    float toFloat( void ) const;
    int toInt( void ) const;
    ~Fixed();
};

std::ostream& operator<<(std::ostream &s, Fixed const &fixed);

#endif