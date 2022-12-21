#include "easyfind.hpp"

int main(){
    std::cout << "========== vector ===========" << std::endl;
    std::vector<int> vec;
    
    vec.push_back(10);
    vec.push_back(20);
    vec.push_back(30);
    vec.push_back(40);

    try {
        std::vector<int>::iterator itr = easyfind(vec, 10);
        std::cout <<  "value is " << *itr << std::endl;
        itr = easyfind(vec, 17);
        std::cout <<  "value is " << *itr << std::endl;
    }
    catch (std::exception & e){
        std::cout << "[error] value is not in vector" << std::endl;

    }

    std::cout << "================ list ===============" << std::endl;
    std::list<int> li;
    li.push_back(1);
    li.push_back(2); 
    li.push_back(3); 
    li.push_back(4); 

     try {
        std::list<int>::iterator itr = easyfind(li, 1);
        std::cout <<  "value is " << *itr << std::endl;
        itr = easyfind(li, 17);
        std::cout <<  "value is " << *itr << std::endl;
    }
    catch (std::exception & e){
        std::cout << "[error] value is not in list" << std::endl;

    }

}