#include    "ClapTrap.hpp"

//==CONSTRUCTER==
ClapTrap::ClapTrap():
    _name("Defaulty"),
	_hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{    std::cout << "ClapTrap " << name_getter() <<  " was born!" << std::endl;}
//with name
ClapTrap::ClapTrap(std::string name):
    _name(name),
	_hit_points(10),
    _energy_points(10),
    _attack_damage(0)
{   std::cout << "ClapTrap " << name_getter() <<  " was born!" << std::endl;}
//==constructor with status
ClapTrap::ClapTrap(
	std::string		name,
	unsigned int	hit_points,
	unsigned int	energy_points,
	unsigned int	attack_damage
	)
{
    name_setter(name);
    hit_points_setter(hit_points);
    energy_points_setter(energy_points);
    attack_damage_setter(attack_damage);
{   std::cout << "ClapTrap " << name_getter() <<  " was born!" << std::endl;}
};

//copy constructor
ClapTrap::ClapTrap(ClapTrap &ori)
{
    *this = ori;
    std::cout << "ClapTrap " << name_getter() <<  " was cloned!" << std::endl;
};

//==DESTRUCTOR==
ClapTrap::~ClapTrap()
{std::cout << "ClapTrap down!" << std::endl;}
//==assignation overload==
ClapTrap & ClapTrap::operator=(const ClapTrap &src)
{
    if(this == &src)
        return(*this);
    name_setter(src._name);
    hit_points_setter(src._hit_points);
    attack_damage_setter(src._attack_damage);
    energy_points_setter(src._energy_points);
    return (*this);
};


//==GETTER== const
std::string     ClapTrap::name_getter() const
{return _name;};
unsigned int    ClapTrap::hit_points_getter() const
{return _hit_points;}
unsigned int    ClapTrap::energy_points_getter() const
{return _energy_points;}
unsigned int    ClapTrap::attack_damage_getter() const
{return _attack_damage;}

//==SETTER
void    ClapTrap::name_setter(std::string name)
{this->_name = name;};
void    ClapTrap::hit_points_setter(unsigned int hit_points)
{this->_hit_points = hit_points;};
void    ClapTrap::attack_damage_setter(unsigned int attack_damage)
{this->_attack_damage = attack_damage;};
void    ClapTrap::energy_points_setter(unsigned int energy_points)
{this->_energy_points = energy_points;};

//==attack, take damege, be repaired==
void    ClapTrap::attack(std::string const &target)
{
    std::cout << "ClapTrap " << name_getter() << " attacks " << target;
    std::cout  << ", causing " << attack_damage_getter() << " points of damage!" << std::endl;
    // ClapTrap <name> attacks <target>,
    // causing <damage> points of damage!
};

void    ClapTrap::takeDamage(unsigned int amount)
{
    _hit_points -= amount;
    std::cout << "ClapTrap " <<  name_getter() << " take " << amount;
    std::cout  << " of damage!";
    std::cout << "HP remains " << hit_points_getter() << " points" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    _hit_points += amount;
    std::cout << "ClapTrap " << name_getter() << " repaired ";
    std::cout  << " for " << amount << " hit points.";
    std::cout << " HP remains " << hit_points_getter() << " points" << std::endl;
};
