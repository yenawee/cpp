#ifndef INTERN_HPP
# define INTERN_HPP

#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
    private :
        Form *presidentialPardonForm(const std::string & target);
        Form *robotomyRequestForm(const std::string & target);
        Form *shrubberyCreationForm(const std::string & target);

    public:
        Intern(void);
        Intern(const Intern & src);
        virtual ~Intern(void);
        Intern & operator=(const Intern & rhs);

        Form *makeForm(const std::string & name, const std::string & target);

        //exception
        class IllegalInputException : public std::exception {
		    virtual const char* what() const throw(){
                return ("[Intern exception] 🚨 Wrong Form name !!!!");
            }
	};
};

#endif