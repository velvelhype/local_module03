#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        //==CONSTRUCTER==
        ScavTrap();
        //with name
        ScavTrap(std::string name);
        //copy constructor
        ScavTrap(ScavTrap&);
        //==DESTRUCTOR==
        virtual ~ScavTrap();
        //==assignation overload==
        ScavTrap &operator=(const ScavTrap& op);
        //==GETTER== const
        //==SETTER
        //actions
        virtual void    attack(std::string const &target) override;
        virtual void    takeDamage(unsigned int amount) override;
        virtual void    beRepaired(unsigned int amount) override;
        //==guardGate==
        void    guardGate();
};

#endif

//==CONSTRUCTER==
//with name
//copy constructor
//==DESTRUCTOR==
//==assignation overload==
//==GETTER== const
//==SETTER
//==attack, take damege, be repaired==
