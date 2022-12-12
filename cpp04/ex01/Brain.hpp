#ifndef Brain_HPP
# define Brain_HPP

#include <iostream>

class Brain
{
    private:
        std::string ideas[100];
    public:
        Brain(void);
        Brain(const Brain & src);
        virtual ~Brain(void);
        Brain & operator=(const Brain & rhs);
        std::string getIdea(int index) const;
        void setIdea(int index, const std::string str);
        void printAll() const;
};

#endif