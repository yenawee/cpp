#ifndef AFORM_HPP
# define A_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string name;
		bool is_signed;
		const int grade_to_sign;
		const int grade_to_execute;
		AForm & operator=(const AForm & rhs);

	public:
		AForm(void);
		AForm(const AForm & src);
		AForm(const std::string name, const int grade1, const int grade2);
		virtual ~AForm(void);

		//getter
		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;

		//method
		void beSigned(const Bureaucrat & bureau);
        virtual void execute(const Bureaucrat & executor) const = 0;
		bool is_valid(const Bureaucrat & executor);

		//exception
		class GradeTooHighException : public std::exception {
            virtual const char* what() const throw(){
                return ("[AForm exception] 🚨 Grade is too High !!!!");
            }
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw(){
                return ("[AForm exception] 🚨 Grade is too Low !!!!");
            }
        };

		class InvalidCondition :: public std::exception {
			virtual const char* what() const throw(){
                return ("[AForm exception] 🚨 Grade is too Low !!!!");
            }
		}
};

std::ostream & operator<<(std::ostream & o, AForm const & rhs);

#endif