#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
    private:
        std::string name;
        int         hitPoints;
        int         energy;
        int         attackDamage;
    
    public:
        ClapTrap();
        ClapTrap(const std::string &name);
        ClapTrap(const ClapTrap &object);
        ClapTrap &operator=(const ClapTrap &object);
        ~ClapTrap();

        void attack(const std::string &target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};


#endif