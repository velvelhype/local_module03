#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>
#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
    public:
        //==CONSTRUCTER==
        FragTrap();
        //with name
        FragTrap(std::string name);
        //copy constructor
        FragTrap(FragTrap&);
        //==DESTRUCTOR==
        virtual ~FragTrap();
        //==assignation overload==
        FragTrap &operator=(const FragTrap& op);
        //==GETTER== const
        //==SETTER
        //actions
        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        // virtual void    attack(std::string const &target) override;
        // virtual void    takeDamage(unsigned int amount) override;
        // virtual void    beRepaired(unsigned int amount);
        //==guardGate==
        void    highFivesGuys();
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
