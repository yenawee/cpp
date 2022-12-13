#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

#include <iostream>

#define HIGH_GRADE 1
#define LOW_GRADE 150

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat(void);
        Bureaucrat(std::string const & name, int index);
        Bureaucrat(const Bureaucrat & src);
        virtual ~Bureaucrat(void);
        Bureaucrat & operator=(const Bureaucrat & rhs);
        std::string getName() const;
        int getGrade() const;

        //exception
        class GradeTooHighException : public exception {
            virtual const char* what() const throw(){
                return ("🚨 Grade is too High !!!!")
            }
        }

        class GradeTooLowException : public exception {
            virtual const char* what() const throw(){
                return ("🚨 Grade is too Low !!!!")
            }
        }
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif