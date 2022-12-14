#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void)
{ 
    std::cout << "ShrubberyCreationForm created. Default." << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src)
{ 
    std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{ 
    std::cout << "ShrubberyCreationForm destroyed." << std::endl; 
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
    if (this != &rhs)
    {
    }
    return *this;
}