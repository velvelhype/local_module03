#include    "ClapTrap.hpp"

//==CONSTRUCTER==

FragTrap::FragTrap(std::string name):
    _name(name),
	_hit_points(100),
    _energy_points(100),
    _attack_damage(0)
{
    std::cout << "FragTrap" << name <<  "born!" << std::endl;
}

//==DESTRUCTOR==

FragTrap::~FragTrap()
{std::cout << "FragTrap down!" << std::endl;}

//==GETTER== const
std::string     FragTrap::name_getter() const
{return _name;};
unsigned int    FragTrap::hit_points_getter() const
{return _hit_points;}
unsigned int    FragTrap::energy_points_getter() const
{return _energy_points;}
unsigned int    FragTrap::attack_damage_getter() const
{return _attack_damage;}

//==SETTER


//==attack, take damege, be repaired==
void    FragTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << name_getter() << " attacks " << target;
    std::cout  << " causing " << attack_damage_getter() << " points of damage!" << std::endl;
    // ClapTrap <name> attacks <target>,
    // causing <damage> points of damage!
};

void    FragTrap::takeDamage(unsigned int amount)
{
    _hit_points -= amount;
    std::cout << "ClapTrap " <<  name_getter() << " take " << amount;
    std::cout  << " of damage! HP remains " << hit_points_getter() << " points" << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    std::cout << "ClapTrap " << name_getter() << " repaired " << amount;
    std::cout  << " of damage! HP remains " << hit_points_getter() << " points" << std::endl;
};