#include "FragTrap.hpp"
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

    FragTrap d;
    FragTrap e("scavos");
    const std::string &cellscav = "enemy";
    e.attack(cellscav);
    unsigned int scav_amount = 3;
    e.takeDamage(scav_amount);
    e.beRepaired(scav_amount);
    FragTrap f(e);
    f.attack(cellscav);
    f.highFivesGuys();

}
