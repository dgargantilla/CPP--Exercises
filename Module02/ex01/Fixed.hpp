#ifndef FIXED_H
#define FIXED_H

# include <iostream>
# include <string>
# include <math.h> 

class Fixed
{
private:
    int                 fixedPointValue;
    static const int    fraction = 8;
public:
    Fixed();
    Fixed(const Fixed &object);
    Fixed(const int);
    Fixed(const float);
    Fixed &operator = (const Fixed &object); //"modifies the behavior of the comparator of class Fixed"
    ~Fixed();
    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    int     toInt(void) const;
    float   toFloat(void) const;
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed); //"modifies the behavior of the comparator of std::ostream"

#endif