#ifndef HARL_HPP
# define HARL_HPP

#include <string>
#include <iostream>


class Harl {
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void wrongInput(void);
        int hash(std::string str);

    public :
        Harl();
        ~Harl();
        void  complain(std::string level);
};

#endif
