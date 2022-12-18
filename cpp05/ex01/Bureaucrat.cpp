#include "Bureaucrat.hpp"
#include "Form.hpp"

Bureaucrat::Bureaucrat(void) : name("default"), grade(150)
{
    // std::cout << "Bureaucrat created. Default." << std::endl;
}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : name(name), grade(grade){
    if (grade < HIGH_GRADE){
        throw Bureaucrat::GradeTooHighException();
    }
    if (grade > LOW_GRADE){
        throw Bureaucrat::GradeTooLowException();
    }
}

Bureaucrat::Bureaucrat(const Bureaucrat & src) : name(src.getName()), grade(src.getGrade())
{
    // std::cout << "Copy constructor called. " << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
    // std::cout << "Bureaucrat destroyed." << std::endl;
}

Bureaucrat & Bureaucrat::operator=(const Bureaucrat & rhs)
{
    if (this != &rhs)
    {
        std::cout << "Copy Assignment operator can't copy Name because it is const value" << std::endl;
        grade = rhs.grade;
    }
    return *this;
}

const std::string Bureaucrat::getName() const{
    return name;
}

int Bureaucrat::getGrade() const{
    return grade;
}

void Bureaucrat::incrementLevel() {
    if (grade <= HIGH_GRADE){
        throw Bureaucrat::GradeTooHighException();
    }
    grade--;
}

void Bureaucrat::decrementLevel() {
    if (grade >= LOW_GRADE){
        throw Bureaucrat::GradeTooLowException();
    }
    grade++;
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs){
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return o;
}

void Bureaucrat::signForm(Form & form) const{
    if (form.getIsSigned()){
        std::cout << form.getName() << " is already signed ! " << std::endl;
		return ;
    }
    try {
        form.beSigned(*this);
        if (form.getIsSigned()){
            std::cout << this->getName() << " signed " << form.getName() << std::endl;
        }
    }
    catch (std::exception & e) {
        std::cout << this->getName() << " couldn’t sign " << form.getName() << " because " << e.what() << std::endl;
        std::cout << "My grade : " << this->getGrade() << " , Grade needed to Sign Form : " << form.getGradeToSign() << std::endl;
    }
}