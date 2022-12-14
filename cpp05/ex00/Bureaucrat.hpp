#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>

#define HIGH_GRADE 1
#define LOW_GRADE 150

class Bureaucrat
{
    private:
        std::string const name;
        int grade;
        Bureaucrat & operator=(const Bureaucrat & rhs);
    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat & src);
        Bureaucrat(std::string const & name, int grade);
        virtual ~Bureaucrat(void);
       
        // getter
        const std::string getName() const;
        int getGrade() const;
        void incrementLevel();
        void decrementLevel();

        //exception
        class GradeTooHighException : public std::exception {
            virtual const char* what() const throw(){
                return ("[Bureaucrat exception] 🚨 Grade is too High !!!!");
            }
        };

        class GradeTooLowException : public std::exception {
            virtual const char* what() const throw(){
                return ("[Bureaucrat exception] 🚨 Grade is too Low !!!!");
            }
        };
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & rhs);

#endif
