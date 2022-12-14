#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
    private:
        std::string target;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string & target);
        ShrubberyCreationForm(const ShrubberyCreationForm & src);
        virtual ~ShrubberyCreationForm(void);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);
};

#endif