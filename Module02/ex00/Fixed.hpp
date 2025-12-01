#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <string>

class Fixed
{
private:
    int                 fixedPointValue;
    static const int    fraction = 8;
public:
    Fixed();
    Fixed(const Fixed &object);
    Fixed &operator = (const Fixed &object);  //"modifies the behavior of the comparator of class Fixed"
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
};

#endif