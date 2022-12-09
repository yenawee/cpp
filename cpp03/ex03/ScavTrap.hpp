#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap {
    protected :
        static const int SCAV_HP = 100;
        static const int SCAV_EP = 50;
        static const int SCAV_AD = 20;
    public :
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap();
        ScavTrap & operator=(ScavTrap const & src);
        void attack(const std::string & target);
        void guardGate();
};

#endif
