#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include "ClapTrap.hpp"

class ScavTrap : public virtual ClapTrap
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
        // virtual void    attack(std::string const &target) override;
        // virtual void    takeDamage(unsigned int amount) override;
        // virtual void    beRepaired(unsigned int amount) override;
        void    attack(std::string const &target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
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
