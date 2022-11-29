#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#define MAX 8
#include "Contact.hpp"

class PhoneBook {
    private :
        Contact m_contacts[8];
        int     m_size;
        void    displayAll(void);
        void    displayIndex(int index);
    
    public :
        PhoneBook(void);
        ~PhoneBook(void);
        void addContact();
        void display(void);
};

#endif