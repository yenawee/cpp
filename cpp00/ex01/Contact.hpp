#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact {
    private :
        std::string m_firstName;
        std::string m_lastName;
        std::string m_nickName;
        std::string m_phoneNumber;
        std::string m_darkestSecret;

        std::string truncateStr(std::string str);

    public :
        Contact(void);
        ~Contact(void);
        int fillInfo(void);
        void show();
};

#endif