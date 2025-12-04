#include "FragTrap.hpp"

FragTrap::FragTrap() 
{
    this->name = "unknown";
    this->hitPoints = 100;
    this->energy = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " has been born" << std::endl;
}

FragTrap::FragTrap(const std::string &name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energy = 100;
    this->attackDamage = 30;
    std::cout << "FragTrap " << this->name << " has been born" << std::endl;
}

FragTrap::FragTrap(const FragTrap &object) : ClapTrap(object)
{
    *this = object;
    std::cout << "FragTrap " << this->name << " has been copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &object)
{
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energy = object.energy;
    this->attackDamage = attackDamage;
    std::cout << "FragTrap " << this->name << " has been copied by assignment" << std::endl;
    return (*this);
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " has been destroyed" << std::endl;
}


void FragTrap::attack(const std::string &target)
{
    if (this->energy > 0 && this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name 
        << " attacks " << target
        << ", causing " << this->attackDamage
        << " points of damage!" << std::endl;
        this->energy--;
    }
    else if (this->hitPoints <= 0)
    {
        std::cout << "FragTrap " << this->name
        << " can't attack because is dead" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << this->name
        << " does not have enough energy " << this->energy 
        << " can't attack " << target << std::endl;
    }
}


void FragTrap::highFivesGuys()
{
    if (this->hitPoints > 0)
    {
        std::cout << "FragTrap " << this->name << "high-fived whith himself and got a boost (nothing happens)" << std::endl;
    }
    else
    {
        std::cout << "FragTrap " << this->name << "it's on the ground... dead" << std::endl;
    }
}