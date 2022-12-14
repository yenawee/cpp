#include "Form.hpp"

Form::Form(void) : name("default"), is_signed(false), grade_to_sign(LOW_GRADE), grade_to_execute(LOW_GRADE)
{
	// std::cout << "Form created. Default." << std::endl;
}

Form::Form(const std::string name, const int grade1, const int grade2) : name(name), is_signed(false), grade_to_sign(grade1), grade_to_execute(grade2){
	// std::cout << "Form created." << std::endl;
	if (grade1 < HIGH_GRADE || grade2 < HIGH_GRADE){
        throw Form::GradeTooHighException();
    }
    if (grade1 > LOW_GRADE || grade2 > LOW_GRADE){
        throw Form::GradeTooLowException();
    }
}

Form::Form(const Form & src) : name(src.getName()), is_signed(src.getIsSigned()), grade_to_sign(src.getGradeToSign()), grade_to_execute(src.getGradeToExecute())
{
	// std::cout << "Copy constructor called. " << std::endl;
}

Form::~Form(void)
{
	// std::cout << "Form destroyed." << std::endl;
}

Form & Form::operator=(const Form & rhs)
{
	if (this != &rhs)
	{
		std::cout << "Form has const values that can't be changed! So we can't use = operator" << std::endl;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Form const & rhs){
	o << "Form name : " << rhs.getName() << ". signed : " << rhs.getIsSigned()
	<< ". Grade needed to sign: " << rhs.getGradeToSign() << ". Grade needed to execute : "
	<< rhs.getGradeToExecute() << std::endl;
	return o;
}

// getter
std::string Form::getName() const{
	return name;
};

bool Form::getIsSigned() const{
	return is_signed;
};

int Form::getGradeToSign() const{
	return grade_to_sign;
};

int Form::getGradeToExecute() const{
	return grade_to_execute;
};

// method
void Form::beSigned(const Bureaucrat & bureau){
	if (bureau.getGrade() <= this->getGradeToSign()){
		is_signed = true;
		return ;
	}
	throw Form::GradeTooLowException();
}
