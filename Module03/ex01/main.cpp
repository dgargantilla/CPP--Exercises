
#include "ScavTrap.hpp"

int main(void)
{

    ClapTrap Aigis("Aigis");
    ScavTrap Metis("Metis");


    Aigis.attack("Metis");
    Metis.takeDamage(10);
    Metis.attack("Aigis");
    Aigis.takeDamage(20);

    Aigis.beRepaired(2);
    Metis.beRepaired(3);

    Metis.guardGate();
}