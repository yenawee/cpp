#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string target;
        static const int RR_SIGN_GRADE = 72;
        static const int RR_EXEC_GRADE = 45;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string & target);
        RobotomyRequestForm(const RobotomyRequestForm & src);
        virtual ~RobotomyRequestForm(void);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);

        void execute(Bureaucrat const & executor) const;

};

#endif