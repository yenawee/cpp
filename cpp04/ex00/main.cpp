#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(){
    const Animal* meta = new Animal(); 
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    std::cout << j->getType() << " " << std::endl; 
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl; 

    j->makeSound();
    i->makeSound();
    meta->makeSound();

    delete meta;
    delete i;
    delete j;

    std::cout << "\n << WrongAnimal test >>" << std::endl;

    const WrongAnimal *k = new WrongCat();
    k->makeSound();


    
    return 0;
}