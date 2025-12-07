
#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &object) : Animal()
{
    *this = object;
    std::cout << "Cat copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &object)
{
    this->type = object.type;
    std::cout << "Cat copy by assignment Constructor called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->type << " Miau" << std::endl;
}
