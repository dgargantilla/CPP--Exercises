#include "ScavTrap.hpp"


ScavTrap::ScavTrap() 
{
    this->name = "unknown";
    this->hitPoints = 100;
    this->energy = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " has been born" << std::endl;
}

ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name)
{
    this->name = name;
    this->hitPoints = 100;
    this->energy = 50;
    this->attackDamage = 20;
    std::cout << "ScavTrap " << this->name << " has been born" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &object) : ClapTrap(object)
{
    *this = object;
    std::cout << "ScavTrap " << this->name << " has been copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &object)
{
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energy = object.energy;
    this->attackDamage = attackDamage;
    std::cout << "ScavTrap " << this->name << " has been copied by assignment" << std::endl;
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " has been destroyed" << std::endl;
}


void ScavTrap::attack(const std::string &target)
{
    if (this->energy > 0 && this->hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->name 
        << " attacks " << target
        << ", causing " << this->attackDamage
        << " points of damage!" << std::endl;
        this->energy--;
    }
    else if (this->hitPoints <= 0)
    {
        std::cout << "ScavTrap " << this->name
        << " can't attack because is dead" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name
        << " does not have enough energy " << this->energy 
        << " can't attack " << target << std::endl;
    }
}


void ScavTrap::guardGate()
{
    if (this->hitPoints > 0)
    {
        std::cout << "ScavTrap " << this->name << "holds the door" << std::endl;
    }
    else
    {
        std::cout << "ScavTrap " << this->name << "man... it's dead" << std::endl;
    }
}