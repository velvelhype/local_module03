#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): _name(ClapTrap::_name)
{
	ClapTrap::name_setter("_clap_name");
	energy_points_setter(50);
	std::cout << "DiamondTrap default constructor (" << _name << ") called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src): ClapTrap(src), ScavTrap(src), FragTrap(src), _name(src._name)
{
	std::cout << "DiamondTrap copy constructor (" << _name << ") called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name), _name(name)
{
	energy_points_setter(50);
	std::cout << "DiamondTrap string constructor (" << _name << ") called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor (" << _name << ") called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(DiamondTrap const& src)
{
	ScavTrap::operator=(src);
	_name = src._name;
	std::cout << "DiamondTrap operator = (" << _name << ") called" << std::endl;
	return (*this);
}

void	DiamondTrap::whoAmI(void) const
{
	std::cout << "This DiamondTrap name is " << _name << " and This ClapTrap name is " << ClapTrap::_name << std::endl;
}