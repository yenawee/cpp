#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
    private:
        std::string target;
        static const int PP_SIGN_GRADE = 25;
        static const int PP_EXEC_GRADE = 5;
    public:
        PresidentialPardonForm(void);
        PresidentialPardonForm(const std::string & target);
        PresidentialPardonForm(const PresidentialPardonForm & src);
        virtual ~PresidentialPardonForm(void);
        PresidentialPardonForm & operator=(const PresidentialPardonForm & rhs);

        const std::string & getTarget() const;

        void execute(Bureaucrat const & executor) const;
};

#endif