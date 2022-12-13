#include "Form.hpp"

Form::Form(void)
{
	std::cout << "Form created. Default." << std::endl;
}

Form::Form(const Form & src)
{
	std::cout << "Copy constructor called. " << std::endl;
	 *this = src;
}

Form::~Form(void)
{
	std::cout << "Form destroyed." << std::endl;
}

Form & Form::operator=(const Form & rhs)
{
	if (this != &rhs)
	{
	}
	return *this;
}

std::ostream & Form::operator<<(std::ostream & o, Form const & rhs){
	o << "Form name : " << rhs.getName() << " signed : " << rhs.getIsSigned()
	<< " Grade needed to sign: " << rhs.getGradeToSign() << " Grade needed to execute : "
	<< rhs.getGradeToExecute() << std::endl;
	return o;
}

