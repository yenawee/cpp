#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) :Form("robotomy request", RR_SIGN_GRADE, RR_EXEC_GRADE), target("default") 
{ 
    // std::cout << "RobotomyRequestForm created. Default." << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(const std::string & target) :Form("robotomy request", RR_SIGN_GRADE, RR_EXEC_GRADE), target(target) 
{ 
    // std::cout << "RobotomyRequestForm created." << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src) : target(src.getTarget())
{ 
    // std::cout << "Copy constructor called. " << std::endl; 
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{ 
    // std::cout << "RobotomyRequestForm destroyed." << std::endl; 
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
    if (this != &rhs)
    {
        target = rhs.target;
    }
    return *this;
}

const std::string & RobotomyRequestForm::getTarget() const{
    return target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
    is_valid(executor);
    std::cout << "drilllllll........driillllll...." << std::endl;
    struct timeval t;
    gettimeofday(&t, NULL);
    srand(t.tv_usec);
    int random = rand();
    if (random % 2 == 0){
		std::cout << target << " has been robotomized" << std::endl;
    }
	else {
		std::cout << target << " has been failed to robotomized." << std::endl;
    }
}
