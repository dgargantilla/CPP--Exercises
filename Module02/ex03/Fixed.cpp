#include "Fixed.hpp"


Fixed::Fixed() : fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &object)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = object;
}

Fixed::Fixed(const int num)
{
    std::cout << "Int constructor called" << std::endl;
    this->fixedPointValue = num << this->fraction;
    //this->fixedPointValue = num * 256; // 2^8
}

Fixed::Fixed(const float num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointValue = static_cast<int>(roundf(num * (1 << this->fraction)));
    //this->fixedPointValue = static_cast<int>(roundf(num * 256)); // num * (2^8)
}

Fixed &Fixed::operator=(const Fixed &object)
{
    std::cout << "Copy assignment operator called" << std::endl;
    this->fixedPointValue = object.getRawBits();
    return *this;
}

bool Fixed::operator>(const Fixed &object) const
{
    if(this->getRawBits() > object.getRawBits())
        return (1);
    return (0); 
}

bool Fixed::operator<(const Fixed &object) const
{
    if(this->getRawBits() < object.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator>=(const Fixed &object) const
{
    if (this->getRawBits() >= object.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator<=(const Fixed &object) const
{
    if (this->getRawBits() <= object.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator==(const Fixed &object) const
{
    if (this->getRawBits() == object.getRawBits())
        return (1);
    return (0);
}

bool Fixed::operator!=(const Fixed &object) const
{
    if (this->getRawBits() != object.getRawBits())
        return (1);
    return (0);
}

/* ++a */
Fixed   &Fixed::operator++(void)
{
    this->fixedPointValue++;
    return (*this);
}

/*a++*/
Fixed   Fixed::operator++(int)
{
    Fixed   before = *this;
    this->fixedPointValue++;
    return (before);
}

/* --a */
Fixed   &Fixed::operator--(void)
{
    this->fixedPointValue--;
    return (*this);
}

/* a-- */
Fixed   Fixed::operator--(int)
{
    Fixed   before = *this;
    this->fixedPointValue--;
    return (before);
}

Fixed   Fixed::operator+(const Fixed &object)
{
    Fixed   res;
    res.setRawBits(this->getRawBits() + object.getRawBits());
    return (res);
}

Fixed   Fixed::operator-(const Fixed &object)
{
    Fixed   res;
    res.setRawBits(this->getRawBits() - object.getRawBits());
    return (res);
}

Fixed   Fixed::operator*(const Fixed &object)
{
    Fixed   res;
    res.setRawBits((this->toFloat() * object.toFloat()) * (1 << fraction)); // * 256  == * (2^8)
    return (res);
}

Fixed   Fixed::operator/(const Fixed &object)
{
    Fixed   res;
    res.setRawBits((this->toFloat() / object.toFloat()) * (1 << fraction)); // * 256  == * (2^8)
    return (res);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}


int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return this->fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->fixedPointValue = raw;
}

float	Fixed::toFloat( void ) const
{
	return (static_cast<float>(this->fixedPointValue) / (1 << this->fraction)); // (/ 256)
    //return (static_cast<float>(this->fixedPointValue) / 256); // (/ 2^8)
}

int		Fixed::toInt( void ) const
{
	return (this->fixedPointValue >> this->fraction); // (/ 256)
    //return (this->fixedPointValue / 256); // (/ 2^8)
}


Fixed   &Fixed::min(Fixed &object1, Fixed &object2)
{
    if (object1 < object2)
    {
        return (object1);
    }
	return (object2);
}

const Fixed &Fixed::min(const Fixed &object1, const Fixed &object2)
{
    if (object1 < object2)
    {
        return (object1);
    }
	return (object2);
}

Fixed   &Fixed::max(Fixed &object1, Fixed &object2)
{
    if (object1 > object2)
    {
        return (object1);
    }
	return (object2);
}

const Fixed &Fixed::max(const Fixed &object1, const Fixed &object2)
{
    if (object1 > object2)
    {
        return (object1);
    }
	return (object2);
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	out << fixed.toFloat(); // fixed-point to float before printing
	return out;
}