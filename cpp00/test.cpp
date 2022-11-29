#include <iostream>

int main(){
    std::string input;
    std::getline(std::cin, input);

    if (input.length() == 0){
        printf("hi\n");
    }
    return 0;

}