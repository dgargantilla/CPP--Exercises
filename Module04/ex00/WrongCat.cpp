#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
    this->type = "WrongCat";
    std::cout << "WrongCat Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &object) : WrongAnimal()
{
    *this = object;
    std::cout << "WrongCat copy Constructor called" << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat &object)
{
    this->type = object.type;
    std::cout << "WrongCat copy by assignment Constructor called" << std::endl;
    return (*this);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

void WrongCat::makeSound() const
{
    std::cout << this->type << " Wrong Miau" << std::endl;
}
