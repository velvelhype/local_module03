#include    "ClapTrap.hpp"
#include    "FragTrap.hpp"

//==CONSTRUCTER==
FragTrap::FragTrap()
:	ClapTrap("Scavy",100,100,30)
{
    std::cout << "FragTrap " << name_getter() << " made!" << std::endl;
};
//with name
FragTrap::FragTrap(std::string name)
:	ClapTrap(name,100,100,30)
{
    std::cout << "FragTrap " << name_getter() << " made!" << std::endl;
};
//copy constructor
FragTrap::FragTrap(FragTrap& src)
:   ClapTrap(src)
{
    std::cout << "FragTrap " << name_getter() << " was cloned!" << std::endl;
}
//==DESTRUCTOR==
FragTrap::~FragTrap()
{std::cout << "FragTrap down!" << std::endl;};
//==assignation overload==
FragTrap & FragTrap::operator=(const FragTrap& src)
{
	if (this == &src)
		return (*this);
	ClapTrap::operator=(src);
	return (*this);
};
//==GETTER== const
//==SETTER
//actions
void    FragTrap::attack(std::string const &target)
{
    std::cout << "FragTrap " << name_getter() << " attacks " << target;
    std::cout  << ", causing " << attack_damage_getter() << " points of damage!" << std::endl;
};

void    FragTrap::takeDamage(unsigned int amount)
{
    hit_points_setter(hit_points_getter() - amount);
    std::cout << "FragTrap " <<  name_getter() << " take " << amount;
    std::cout  << " of damage!";
    std::cout << "HP remains " << hit_points_getter() << " points" << std::endl;
}

void    FragTrap::beRepaired(unsigned int amount)
{
    hit_points_setter(hit_points_getter() + amount);
    std::cout << "FragTrap " << name_getter() << " repaired ";
    std::cout  << " for " << amount << " hit points.";
    std::cout << " HP remains " << hit_points_getter() << " points" << std::endl;
};

//==guardGate==
void    FragTrap::highFivesGuys()
{
    std::cout <<  "FragTrap " << name_getter();
    std::cout <<" requested you some nice highfive" << std::endl;
};