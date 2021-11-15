#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap;

class ClapTrap
{
    public:
        //==default constructor==
        ClapTrap();
        //==constructor with name
        ClapTrap(std::string name);
        //==copy constructor==
        ClapTrap(ClapTrap &ori);
        //==destructor==
        ~ClapTrap();
        //==assignation overload==
        ClapTrap &operator=(const ClapTrap &src);

        //==actions==
        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        //==getter==
        std::string     name_getter() const;
        unsigned int    hit_points_getter() const;
        unsigned int    attack_damage_getter() const;
        unsigned int    energy_points_getter() const;
        //==setter==
        void    name_setter(std::string name);
        void    hit_points_setter(unsigned int hit_points);
        void    attack_damage_setter(unsigned int attack_damage);
        void    energy_points_setter(unsigned int energy_points);

    private:
        std::string _name;
        unsigned int _hit_points;
        unsigned int _energy_points;
        unsigned int _attack_damage;
};

#endif