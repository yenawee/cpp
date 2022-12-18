#include "Intern.hpp"

Intern::Intern(void) 
{ 
    // std::cout << "Intern created. Default." << std::endl; 
}

Intern::Intern(const Intern & src)
{ 
    // std::cout << "Copy constructor called. " << std::endl; 
     *this = src; 
}

Intern::~Intern(void)
{ 
    // std::cout << "Intern destroyed." << std::endl; 
}

Intern & Intern::operator=(const Intern & rhs)
{
    (void)rhs;
    return *this;
}

Form *Intern::makeForm(const std::string & name, const std::string & target){
    static Form * ( Intern::*func[3] )( const std::string & ) = {
		&Intern::presidentialPardonForm, &Intern::robotomyRequestForm, &Intern::shrubberyCreationForm
    };
    static std::string formName[3] = {"presidential pardon", "robotomy request", "shrubbery creation"};
    try {
        for (int i = 0; i < 3; i++){
            if (!name.compare(formName[i])){
                std::cout << "Intern creates " << name << std::endl;
                return ((this->*func[i])(target));
            }   
        }
        throw Intern::IllegalInputException();
    }
    catch (std::exception & e){
        std::cout << e.what() << std::endl;
        return NULL;
    }
}

Form *Intern::presidentialPardonForm(const std::string & target){
    return (new PresidentialPardonForm(target));

}
Form *Intern::robotomyRequestForm(const std::string & target){
    return (new RobotomyRequestForm(target));
}

Form *Intern::shrubberyCreationForm(const std::string & target){
    return (new ShrubberyCreationForm(target));
}