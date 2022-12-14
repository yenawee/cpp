#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string target;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string & target);
        PresidentialPardonForm(const PresidentialPardonForm & src);
        virtual ~PresidentialPardonForm(void);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);


};

#endif