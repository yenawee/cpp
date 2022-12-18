#include "AForm.hpp"

AForm::AForm(void) : name("default"), is_signed(false), grade_to_sign(LOW_GRADE), grade_to_execute(LOW_GRADE)
{
	// std::cout << "AForm created. Default." << std::endl;
}

AForm::AForm(const std::string name, const int grade1, const int grade2) : name(name), is_signed(false), grade_to_sign(grade1), grade_to_execute(grade2){
	// std::cout << "AForm created." << std::endl;
	if (grade1 < HIGH_GRADE || grade2 < HIGH_GRADE){
        throw AForm::GradeTooHighException();
    }
    if (grade1 > LOW_GRADE || grade2 > LOW_GRADE){
        throw AForm::GradeTooLowException();
    }
}

AForm::AForm(const AForm & src) : name(src.getName()), is_signed(src.getIsSigned()), grade_to_sign(src.getGradeToSign()), grade_to_execute(src.getGradeToExecute())
{
	// std::cout << "Copy constructor called. " << std::endl;
}

AForm::~AForm(void)
{
	// std::cout << "AForm destroyed." << std::endl;
}

AForm & AForm::operator=(const AForm & rhs)
{
	if (this != &rhs)
	{
		std::cout << "AForm has const values that can't be changed! So we can't use = operator" << std::endl;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, AForm const & rhs){
	o << "AForm name : " << rhs.getName() << ". signed : " << rhs.getIsSigned()
	<< ". Grade needed to sign: " << rhs.getGradeToSign() << ". Grade needed to execute : "
	<< rhs.getGradeToExecute() << std::endl;
	return o;
}

// getter
const std::string & AForm::getName() const{
	return name;
};

bool AForm::getIsSigned() const{
	return is_signed;
};

int AForm::getGradeToSign() const{
	return grade_to_sign;
};

int AForm::getGradeToExecute() const{
	return grade_to_execute;
};

// method
void AForm::beSigned(const Bureaucrat & bureau){
	if (bureau.getGrade() <= this->getGradeToSign()){
		is_signed = true;
		return ;
	}
	throw AForm::GradeTooLowException();
}

void AForm::is_valid(const Bureaucrat & executor) const{
	if (!is_signed){
		throw AForm::InvalidCondition();
	}
	if (executor.getGrade() > grade_to_execute){
		throw AForm::GradeTooLowException();
	}
	return ;
}

