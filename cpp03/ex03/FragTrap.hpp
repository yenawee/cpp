#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap {
    protected :
        static const int FRAG_HP = 100;
        static const int FRAG_EP = 100;
        static const int FRAG_AD = 30;
    public :
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap();
        FragTrap & operator=(FragTrap const & src);
        void attack(const std::string& target);
        void highFivesGuys(void);
};

#endif
