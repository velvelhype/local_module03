#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class FragTrap;

class FragTrap
{
    public:
        FragTrap();
        ~FragTrap();
        void attack(std::string const);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

    private:
        unsigned int _hit_points;
        unsigned int _energy_points;
        unsigned int _attack_damage;
};

#endif