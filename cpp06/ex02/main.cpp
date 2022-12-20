#include "Base.hpp"
#include <sys/time.h>

Base * generate(void);
void identify(Base* p);
void identify(Base& p);


int main(){
	Base *base = generate();

	identify(base);
	identify(*base);
}

Base * generate(void) {
	struct timeval t;
    gettimeofday(&t, NULL);
    srand(t.tv_usec);
    int random = rand();
	if (random % 3 == 0){ return new A(); }
	else if (random % 3 == 1){ return new B(); }
	else { return new C(); }
}

void identify(Base* p) {
	if (dynamic_cast<A *>(p)){
		std::cout << "class is A type" << std::endl;
	}
	else if (dynamic_cast<B *>(p)){
		std::cout << "class is B type" << std::endl;
	}
	else if (dynamic_cast<C *>(p)){
		std::cout << "class is C type" << std::endl;
	}
	else {
		std::cout << "class is not A,B or C type" << std::endl;
	}
}

void identify(Base& p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "class is A type" << std::endl;
		return ;
	}
	catch (std::exception & e){}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "class is B type" << std::endl;
		return ;
	}
	catch (std::exception & e){}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "class is C type" << std::endl;
		return ;
	}
	catch (std::exception & e){
		std::cout << "class is not A,B or C type" << std::endl;
	}
}
