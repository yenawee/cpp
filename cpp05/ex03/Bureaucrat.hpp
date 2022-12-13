#ifndef Bureaucrat_HPP
# define Bureaucrat_HPP

class Bureaucrat
{
    private:
    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat & src);
        virtual ~Bureaucrat(void);
        Bureaucrat & operator=(const Bureaucrat & rhs);
};

#endif