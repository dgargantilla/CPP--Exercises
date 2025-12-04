
#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : name("unknown"), hitPoints(10), energy(10), attackDamage(10)
{
    std::cout << "ClapTrap " << this->name << " has been born" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name) : name(name), hitPoints(10), energy(10), attackDamage(10)
{
    std::cout << "ClapTrap " << this->name << " has been born" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &object)
{
    *this = object;
    std::cout << "ClapTrap "<< this->name << " has been copied" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &object)
{
    this->name = object.name;
    this->hitPoints = object.hitPoints;
    this->energy = object.energy;
    this->attackDamage = attackDamage;
    std::cout << "ClapTrap "<< this->name << " has been copied by assignment" << std::endl;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap "<< this->name << " has been destroyed" << std::endl;
}


void ClapTrap::attack(const std::string &target)
{
    if (this->energy > 0 && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name 
        << " attacks " << target
        << ", causing " << this->attackDamage
        << " points of damage!" << std::endl;
        this->energy--;
    }
    else if (this->hitPoints <= 0)
    {
        std::cout << "ClapTrap " << this->name
        << " can't attack because is dead" << std::endl;
    }
    else
    {
        std::cout << "ClapTrap " << this->name
        << " does not have enough energy " << this->energy 
        << " can't attack " << target << std::endl;
    }
}


void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        std::cout << this->name
        << " has taken " << amount 
        << " points of damage"<< std::endl;
        this->hitPoints -= amount;
        std::cout << this->hitPoints <<" points of health remain" << std::endl;
        if (this->hitPoints <= 0)
        {
            std::cout << this->name
            << " has died "<< std::endl;
        }
    }
    else
    {
        std::cout << "STOP!! " << this->name
        << " is already dead" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->hitPoints > 0 && this->energy > 0)
    {
        std::cout << this->name
        << " has repaired itself " << amount
        << " it lost one point of energy " << std::endl;
        this->hitPoints += amount;
        this->energy--;
        std::cout << this->energy <<" points of energy remain" << std::endl;
    }
    else if (this->hitPoints <= 0)
    {
        std::cout << this->name
        << " can be repaired because id dead" << std::endl;
    }
    else
    {
        std::cout << this->name
        << " can be repaired because it has " << this->energy 
        << "energy points" << std::endl;
    }
}

