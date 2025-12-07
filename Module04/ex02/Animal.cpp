

#include "Animal.hpp"

Animal::Animal() : type("Unknown Animal")
{
    std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal(const Animal &object)
{
    *this = object;
    std::cout << "Animal copy Constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &object)
{
    this->type = object.type;
    std::cout << "Animal copy by assignment Constructor called" << std::endl;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

void Animal::makeSound() const
{
    std::cout << this->type << " does animal sound" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}