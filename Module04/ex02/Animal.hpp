#ifndef ANIMAL_HPP
# define  ANIMAL_HPP

#include <iostream>
#include <string>


class Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(const Animal &object);
        Animal &operator=(const Animal &object);
        virtual ~Animal();

        virtual void    makeSound() const = 0; // this is a pure virtual method ( = 0)
        /*
            this means that the class Animal is totaly virtual;
            in other words, it is now an abstract class.
        */
        std::string     getType() const;
};


#endif