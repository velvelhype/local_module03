#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main()
{
    // ClapTrap a;
    // ClapTrap b("clap");
    // unsigned int amount = 3;
    // const std::string &cell = "enemy";
    // b.attack(cell);
    // b.takeDamage(amount);
    // b.beRepaired(amount);
    // ClapTrap c(a);
    // a.attack(cell);

    ScavTrap d;
    ScavTrap e("scavos");
    const std::string &cellscav = "enemy";
    e.attack(cellscav);
    unsigned int scav_amount = 3;
    e.takeDamage(scav_amount);
    e.beRepaired(scav_amount);
    ScavTrap f(e);
    f.attack(cellscav);
    f.guardGate();

}
