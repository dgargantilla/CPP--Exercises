
#include "Brain.hpp"

Brain::Brain(/* args */)
{
    std::cout << "Brain Constructor called" << std::endl;
}

Brain::Brain(const Brain &object)
{
    *this = object;
    std::cout << "Brain Copy Constructor called" << std::endl;
}

Brain &Brain::operator=(const Brain &object)
{
    std::cout << "Brain Copy Constructor called" << std::endl;
    if (this != &object)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = object.ideas[i];
    }
    return (*this);
}

Brain::~Brain()
{
    std::cout << "Brain Destructor called" << std::endl;
}


void    Brain::setIdeas(const std::string &idea)
{
    for (int i = 0; i < 100; i++)
        this->ideas[i] = idea;
    std::cout << "An idea has appeared : " << idea << std::endl;
}

void Brain::printIdeas() const
{
    for (int i = 0; i < 100; i++)
        std::cout << this->ideas[i] << std::endl;
}