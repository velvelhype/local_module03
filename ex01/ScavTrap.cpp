#include    "ClapTrap.hpp"
#include    "ScavTrap.hpp"

//==CONSTRUCTER==
ScavTrap::ScavTrap()
:	ClapTrap("Scavy",100,50,20)
{
    std::cout << "ScavTrap " << name_getter() << " made!" << std::endl;
};
//with name
ScavTrap::ScavTrap(std::string name)
:	ClapTrap(name,100,50,20)
{
    std::cout << "ScavTrap " << name_getter() << " made!" << std::endl;
};
//copy constructor
ScavTrap::ScavTrap(ScavTrap& src)
:   ClapTrap(src)
{
    std::cout << "ScavTrap " << name_getter() << " was cloned!" << std::endl;
}
//==DESTRUCTOR==
ScavTrap::~ScavTrap()
{std::cout << "ScavTrap down!" << std::endl;};
//==assignation overload==
ScavTrap & ScavTrap::operator=(const ScavTrap& src)
{
	if (this == &src)
		return (*this);
	ClapTrap::operator=(src);
	return (*this);
};
//==GETTER== const
//==SETTER
//actions
void    ScavTrap::attack(std::string const &target)
{
    std::cout << "ScavTrap " << name_getter() << " attacks " << target;
    std::cout  << ", causing " << attack_damage_getter() << " points of damage!" << std::endl;
};

void    ScavTrap::takeDamage(unsigned int amount)
{
    hit_points_setter(hit_points_getter() - amount);
    std::cout << "ScavTrap " <<  name_getter() << " take " << amount;
    std::cout  << " of damage!";
    std::cout << "HP remains " << hit_points_getter() << " points" << std::endl;
}

void    ScavTrap::beRepaired(unsigned int amount)
{
    hit_points_setter(hit_points_getter() + amount);
    std::cout << "ScavTrap " << name_getter() << " repaired ";
    std::cout  << " for " << amount << " hit points.";
    std::cout << " HP remains " << hit_points_getter() << " points" << std::endl;
};

//==guardGate==
void    ScavTrap::guardGate()
{
    std::cout <<  "ScavTrap " << name_getter();
    std::cout <<" have enterred in Gate keeper mode" << std::endl;
};