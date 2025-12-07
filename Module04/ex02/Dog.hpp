
#ifndef DOG_HPP
# define DOG_HPP


#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
    private:
        Brain   *_brain;
    public:
        Dog();
        Dog(const Dog &object);
        Dog &operator=(const Dog &object);
        ~Dog();

        void    makeSound() const;
        void    setIdeas(const std::string &idea);
        void    printIdeas();
};


#endif
