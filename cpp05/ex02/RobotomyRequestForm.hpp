#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
    private:
        std::string target;
    public:
        RobotomyRequestForm(void);
        RobotomyRequestForm(const std::string & target);
        RobotomyRequestForm(const RobotomyRequestForm & src);
        virtual ~RobotomyRequestForm(void);
        RobotomyRequestForm & operator=(const RobotomyRequestForm & rhs);
};

#endif