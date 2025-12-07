
#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->_brain = new Brain();
    std::cout << "Dog Constructor called" << std::endl;
}

Dog::Dog(const Dog &object) : Animal()
{
    this->_brain = new Brain(*object._brain);
    *this = object;
    std::cout << "Dog copy Constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &object)
{
    if (this != &object)
    {
        this->type = object.type;
        delete this->_brain;
        this->_brain = new Brain(*object._brain);
    }
    std::cout << "Dog copy by assignment Constructor called" << std::endl;
    return (*this);
}

Dog::~Dog()
{
    delete this->_brain;
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << this->type << " Guau Guau Guau" << std::endl;
}

void Dog::setIdeas(const std::string &idea)
{
    this->_brain->setIdeas(idea);
}


void    Dog::printIdeas()
{
    this->_brain->printIdeas();
}