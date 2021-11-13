#include "ClapTrap.hpp"

int main()
{
    FragTrap a("hi");
    unsigned int amount = 3;
    const std::string &cell = "enemy";
    a.attack(cell);
    a.takeDamage(amount);
    a.beRepaired(amount);
}
