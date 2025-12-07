#ifndef WRONGANIMAL_HPP
# define  WRONGANIMAL_HPP

#include <iostream>
#include <string>


class WrongAnimal
{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal &object);
        WrongAnimal &operator=(const WrongAnimal &object);
        virtual ~WrongAnimal();

        virtual void    makeSound() const;
        std::string     getType() const;
};


#endif