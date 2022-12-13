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
        Bureaucrat(std::string const & name, int grade);
        Bureaucrat(const Bureaucrat & src);
        virtual ~Bureaucrat(void);
        Bureaucrat & operator=(const Bureaucrat & rhs);

        // getter
        const std::string getName() const;
        int getGrade() const;

        // method
        void incrementLevel();
        void decrementLevel();
        void signForm(Form & form);

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

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
