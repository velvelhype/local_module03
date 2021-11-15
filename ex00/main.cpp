#include "ClapTrap.hpp"

int main()
{
    ClapTrap z;
    ClapTrap a("hi");
    unsigned int amount = 3;
    const std::string &cell = "enemy";
    a.attack(cell);
    a.takeDamage(amount);
    a.beRepaired(amount);
    ClapTrap b(a);
    a.attack(cell);
}
