#include    "ClapTrap.hpp"

FragTrap::FragTrap():
	_hit_points(100),
    _energy_points(100)
{
    std::cout << "FR4G-TP Ha nacido para quedarse" << std::endl;
}

FragTrap::~FragTrap() 
{
    std::cout << "FR4G-TP se va por que quiere" << std::endl;
}