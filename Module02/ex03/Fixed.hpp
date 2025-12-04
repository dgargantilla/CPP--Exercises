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
    ~Fixed();

    Fixed   &operator=(const Fixed &object); //"modifies the behavior of the comparator of class Fixed"
    bool    operator>(const Fixed &object) const;
    bool    operator<(const Fixed &object) const;
    bool    operator>=(const Fixed &object) const;
    bool    operator<=(const Fixed &object) const;
    bool    operator==(const Fixed &object) const;
    bool    operator!=(const Fixed &object) const;

    Fixed   operator+(const Fixed &other);
    Fixed   operator-(const Fixed &other);
    Fixed   operator*(const Fixed &other);
    Fixed   operator/(const Fixed &other);

    Fixed   &operator++(void); //++a
    Fixed   operator++(int); //a++
    Fixed   &operator--(void); // --a
    Fixed   operator--(int); // a--

    int     getRawBits(void) const;
    void    setRawBits(int const raw);
    int     toInt(void) const;
    float   toFloat(void) const;

    static Fixed    &min(Fixed &, Fixed &); // Returns smallest
    static const Fixed  &min(const Fixed &, const Fixed &); // Returns const smallest
    static Fixed    &max(Fixed &, Fixed &); // Returns greatest
    static const Fixed  &max(const Fixed &, const Fixed &); // Returns const greatest
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif