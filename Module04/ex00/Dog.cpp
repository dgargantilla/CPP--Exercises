
#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &object) : Animal()
{
    *this = object;
    std::cout << "Dog copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &object)
{
    this->type = object.type;
    std::cout << "Dog copy by assignment Constructor called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << this->type << " Guau Guau Guau" << std::endl;
}
