#ifndef Form_HPP
# define Form_HPP

#include <iostream>

class Form
{
	private:
		const std::string name;
		boolean is_signed;
		const int grade_to_sign;
		const int grade_to_execute;
	public:
		Form(void);
		Form(const Form & src);
		virtual ~Form(void);
		Form & operator=(const Form & rhs);

		//getter
		const std::string getName() const;
		boolean getIsSigned() const;
		const int getGradeToSign() const;
		const int getGradeToExecute() const;

		//method
		void beSigned(const Bureaucrat & bureau);

		//exception
		class GradeTooHighException : public std::exception {
            virtual const char* what() const throw(){
                return ("🚨 Grade is too High !!!!");
            }
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw(){
                return ("🚨 Grade is too Low !!!!");
            }
        };
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif
