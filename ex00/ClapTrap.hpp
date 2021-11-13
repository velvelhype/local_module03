#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class FragTrap;

class FragTrap
{
    public:
        FragTrap(std::string name);
        ~FragTrap();
        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        std::string     name_getter() const;
        unsigned int    hit_points_getter() const;
        unsigned int    attack_damage_getter() const;
        unsigned int    energy_points_getter() const;


    private:
        std::string _name;
        unsigned int _hit_points;
        unsigned int _energy_points;
        unsigned int _attack_damage;
};

#endif