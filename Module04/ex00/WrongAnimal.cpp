#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown WrongAnimal")
{
    std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &object)
{
    *this = object;
    std::cout << "WrongAnimal copy Constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &object)
{
    this->type = object.type;
    std::cout << "WrongAnimal copy by assignment Constructor called" << std::endl;
    return (*this);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal Destructor called" << std::endl;
}

void WrongAnimal::makeSound() const
{
    std::cout << this->type << " does animal sound" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return (this->type);
}