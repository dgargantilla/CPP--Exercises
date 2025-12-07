#ifndef WRONGDOG_HPP
# define WRONGDOG_HPP


#include "WrongAnimal.hpp"


class WrongDog : public WrongAnimal
{
    public:
        WrongDog();
        WrongDog(const WrongDog &object);
        WrongDog &operator=(const WrongDog &object);
        ~WrongDog();

        void    makeSound() const;
};


#endif