#include    "ClapTrap.hpp"

FragTrap::FragTrap():
    _name("Poppy"),
	_hit_points(100),
    _energy_points(100),
    _attack_damage(0)
{
    std::cout << "FragTrap born!" << std::endl;
}
FragTrap::~FragTrap() 
{
    std::cout << "FragTrap down!" << std::endl;
}

// attack, take dame, be repaired
void    FragTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << _name << " attacks " << target;
    std::cout  << " causing " << _attack_damage << " points of damage!" << std::endl;
    // ClapTrap <name> attacks <target>, 
    // causing <damage> points of damage!
};

void    FragTrap::takeDamage(unsigned int amount)
{
    _hit_points -= amount;
    std::cout << "ClapTrap " << _name << " take " << amount;
    std::cout  << " of damage! HP remains " << _hit_points << " points" << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    std::cout << "ClapTrap " << _name << " repaired " << amount;
    std::cout  << " of damage! HP remains " << _hit_points << " points" << std::endl;
};