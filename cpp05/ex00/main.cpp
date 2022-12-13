#include "Bureaucrat.hpp"

void BasicTest(){
   // grade 범위 벗어날 시 에러 발생
   Bureaucrat man = Bureaucrat("first", 0);
   Bureaucrat woman = Bureaucrat("second", 151);
}

void IncrementTest(){
	Bureaucrat man = Bureaucrat("first", 2);
	man.incrementLevel();
	std::cout << man;
	man.incrementLevel();
}

void DecrementTest(){
	Bureaucrat man = Bureaucrat("first", 149);
	man.decrementLevel();
	std::cout << man;
	man.decrementLevel();
}

int main(){
	try {
		//BasicTest();
		//IncrementTest();
		DecrementTest();

	}
	catch (std::exception & e){
		std::cerr << e.what() << std::endl;
	}
}
