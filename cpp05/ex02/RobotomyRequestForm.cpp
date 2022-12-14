#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
{ 
    std::cout << "RobotomyRequestForm created. Default." << std::endl; 
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{ 
    std::cout << "RobotomyRequestForm destroyed." << std::endl; 
}

RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm & rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}