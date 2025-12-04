
#include "ClapTrap.hpp"

int main(void)
{

    ClapTrap Clap("Clap");
    ClapTrap Trap("Trap");


    Clap.attack("Trap");
    Trap.takeDamage(10);
    Trap.attack("Clap");
    Clap.takeDamage(10);

    Clap.beRepaired(2);
    Trap.beRepaired(3);
}