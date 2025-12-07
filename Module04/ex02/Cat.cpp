
#include "Cat.hpp"

Cat::Cat() : Animal()
{
    this->type = "Cat";
    this->_brain = new Brain();
    std::cout << "Cat Constructor called" << std::endl;
}

Cat::Cat(const Cat &object) : Animal()
{
    this->_brain = new Brain(*object._brain);
    *this = object;
    std::cout << "Cat copy Constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &object)
{
    if (this != &object)
    {
        this->type = object.type;
        delete this->_brain;
        this->_brain = new Brain(*object._brain);
    }
    std::cout << "Cat copy by assignment Constructor called" << std::endl;
    return (*this);
}

Cat::~Cat()
{
    delete this->_brain;
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound() const
{
    std::cout << this->type << " Miau" << std::endl;
}

void Cat::setIdeas(const std::string &idea)
{
    this->_brain->setIdeas(idea);
}


void    Cat::printIdeas()
{
    this->_brain->printIdeas();
}