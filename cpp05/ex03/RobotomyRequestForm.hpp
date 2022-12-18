#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <sys/time.h>

class RobotomyRequestForm : public Form {
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

        const std::string & getTarget() const;
        void execute(Bureaucrat const & executor) const;

};

#endif