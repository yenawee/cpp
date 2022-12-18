#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
    private:
        std::string target;
        static const int SC_SIGN_GRADE = 145;
        static const int SC_EXEC_GRADE = 137;
    public:
        ShrubberyCreationForm(void);
        ShrubberyCreationForm(const std::string & target);
        ShrubberyCreationForm(const ShrubberyCreationForm & src);
        virtual ~ShrubberyCreationForm(void);
        ShrubberyCreationForm & operator=(const ShrubberyCreationForm & rhs);

        void execute(Bureaucrat const & executor) const;

        const std::string & getTarget() const;

        //exception
        class FileIOexception : public std::exception {
            virtual const char* what() const throw(){
                return ("[IOS exception] 🚨 Error occurs while control file !!!!");
            }
        };
};

#endif