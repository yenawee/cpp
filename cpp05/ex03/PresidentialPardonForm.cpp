#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : Form("presidential pardon", PP_SIGN_GRADE, PP_EXEC_GRADE), target("default") {
    // std::cout << "PresidentialPardonForm created. Default." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string & target) : Form("presidential pardon", PP_SIGN_GRADE, PP_EXEC_GRADE), target(target) {
    // std::cout << "PresidentialPardonForm created." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src) : target(src.getTarget()){
    // std::cout << "Copy constructor called. " << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
    // std::cout << "PresidentialPardonForm destroyed." << std::endl;
}

PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm & rhs)
{
    if (this != &rhs)
    {
        target = rhs.target;
    }
    return *this;
}

const std::string & PresidentialPardonForm::getTarget() const{
    return target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    is_valid(executor);
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

