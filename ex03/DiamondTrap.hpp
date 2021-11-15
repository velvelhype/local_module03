#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
    private:
        //==CONSTRUCTER==
        DiamondTrap();
    public:
        //with name
        DiamondTrap(std::string name);
        //copy constructor
        DiamondTrap(DiamondTrap&);
        //==DESTRUCTOR==
        virtual ~DiamondTrap();
        //==assignation overload==
        DiamondTrap &operator=(const DiamondTrap& op);
        //==GETTER== const
        //==SETTER
        //actions
        //==uniques==
        void    whoAmI();;
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
