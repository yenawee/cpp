#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(){

    // // brain 멤버 변수 확인
    // Brain brain;
    // for (int i = 0; i < 100; i++){
    //     std::cout << brain.getIdea(i) << std::endl;
    // }

    // // 복사 생성 확인
    // Brain copy(brain);
    //  for (int i = 0; i < 100; i++){
    //     std::cout << copy.getIdea(i) << std::endl;
    // }

    // // Animal Array 생성
    // Animal *arr[10];
    // for (int i = 0; i < 5; i++){
    //     arr[i] = new Dog();
    //     arr[i+5] = new Cat();
    // }

    // // delete test
    // for (int i = 0 ; i < 10 ; i++){
    //     delete arr[i];
    // }

    // deep copy test
    Cat cat = Cat();
    Brain *cat_brain = cat.getBrain();

    Cat copy_cat = Cat();
    copy_cat = cat;
    Brain *copy_cat_brain = copy_cat.getBrain();

    std::cout << "address compare" << std::endl;
    std::cout << cat_brain << "," << copy_cat_brain << std::endl;

    cat_brain->setIdea(99, "hi");
    copy_cat_brain->printAll();

    // system("leaks a.out");

}