
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{

    ClapTrap Aigis("Aigis");
    ScavTrap Metis("Metis");
    FragTrap Millum("Millum");
    


    Aigis.attack("Metis");
    Metis.takeDamage(10);
    Metis.attack("Millum");
    Millum.takeDamage(20);
    Millum.attack("Metis");
    Metis.takeDamage(30);

    Aigis.beRepaired(2);
    Metis.beRepaired(3);
    Millum.beRepaired(1);

    Metis.guardGate();
    Millum.highFivesGuys();
}