#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("SC", SC_SIGN_GRADE, SC_EXEC_GRADE), target("default")
{ 
    // std::cout << "ShrubberyCreationForm created. Default." << std::endl; 
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string & target) : AForm("SC", SC_SIGN_GRADE, SC_EXEC_GRADE), target(target) {
    // std::cout << "PresidentialPardonForm created." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & src) : target(src.getTarget())
{ 
    // std::cout << "Copy constructor called. " << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{ 
    // std::cout << "ShrubberyCreationForm destroyed." << std::endl; 
}

const std::string & ShrubberyCreationForm::getTarget() const{
    return target;
}

ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm & rhs)
{
    if (this != &rhs)
    {
        target = rhs.target;
    }
    return *this;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
    is_valid(executor);
    std::ifstream ifs("ASCII_christmas.txt");
    if (ifs.fail()){
        throw ShrubberyCreationForm::FileIOexception();
    }
    std::string fileName(target + "_shrubbery");
    std::ofstream ofs(fileName.c_str());
    if (ofs.fail()){
        throw ShrubberyCreationForm::FileIOexception();
    }
    std::string buffer;
    while (true){
        std::getline(ifs, buffer);
        if (ifs.eof()){
            break ;
        }
        ofs << buffer << std::endl;
    }
    ifs.close();
    ofs.close();
}
