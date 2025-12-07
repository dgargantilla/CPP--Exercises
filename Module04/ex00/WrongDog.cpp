#include "WrongDog.hpp"

WrongDog::WrongDog() : WrongAnimal()
{
    this->type = "WrongDog";
    std::cout << "WrongDog Constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &object) : WrongAnimal()
{
    *this = object;
    std::cout << "WrongDog copy Constructor called" << std::endl;
}

WrongDog &WrongDog::operator=(const WrongDog &object)
{
    this->type = object.type;
    std::cout << "WrongDog copy by assignment Constructor called" << std::endl;
    return (*this);
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog Destructor called" << std::endl;
}

void WrongDog::makeSound() const
{
    std::cout << this->type << " Wrong Guau Guau Guau" << std::endl;
}
