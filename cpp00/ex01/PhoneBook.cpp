// phone book class 는 contact instance 배열을 가지고 있음 
// contact class 는 first name, last name, nickname, phone number, and darkest secret 필드를 가지고있다 다 string 으로 해주면 될듯

#include <iostream>
#include "PhoneBook.hpp"

Sample::Sample(char p1, int p2, float p3) : a1(p1), a2(p2), a3(p3) {
    std::cout << "Constructor called" << std::endl;
    std::cout << "this->a1 = " << this->a1 << std::endl;
    std::cout << "this->a2 = " << this->a2 << std::endl;
    std::cout << "this->a3 = " << this->a3 << std::endl;
} 

Sample::~Sample(void){
    std::cout << "Destructor called" << std::endl;
    return ;
}