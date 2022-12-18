#include "Intern.hpp"

int main(){

    Intern  someRandomIntern;
    Form*   rrf;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");

    Bureaucrat woman = Bureaucrat("woman", 20);
    woman.signForm(*rrf);
    woman.executeForm(*rrf);

    // Form *no_name = someRandomIntern.makeForm("good", "target");

}