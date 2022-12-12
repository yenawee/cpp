#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(){

    // 인스턴스화 안됨
    // AAnimal ani = AAnimal();


    AAnimal *ani = new Dog();
    ani->makeSound();
    std::cout << ani->getType() << std::endl;

    Cat cat = Cat();
    cat.makeSound();
}