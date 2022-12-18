#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string name;
		bool is_signed;
		const int grade_to_sign;
		const int grade_to_execute;
		Form & operator=(const Form & rhs);

	public:
		Form(void);
		Form(const Form & src);
		Form(const std::string name, const int grade1, const int grade2);
		virtual ~Form(void);

		//getter
		const std::string & getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		//method
		void beSigned(const Bureaucrat & bureau);
        virtual void execute(const Bureaucrat & executor) const = 0;
		void is_valid(const Bureaucrat & executor) const;

		//exception
		class GradeTooHighException : public std::exception {
            virtual const char* what() const throw(){
                return ("[Form exception] 🚨 Grade is too High !!!!");
            }
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw(){
                return ("[Form exception] 🚨 Grade is too Low !!!!");
            }
        };

		class InvalidCondition : public std::exception {
			virtual const char* what() const throw(){
                return ("[Form exception] 🚨 Form is not signed !!!!");
            }
		};
};

std::ostream & operator<<(std::ostream & o, Form const & rhs);

#endif