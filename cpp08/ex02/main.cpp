#include "MutantStack.hpp"

// int main(){
// 	MutantStack<int> mstack;
// 	mstack.push(5);
// 	mstack.push(17);
// 	std::cout << mstack.top() << std::endl;
// 	mstack.pop();
// 	std::cout << mstack.size() << std::endl;
// 	mstack.push(3);
// 	mstack.push(5);
// 	mstack.push(737); //[...]
// 	mstack.push(0);
// 	MutantStack<int>::iterator it = mstack.begin();
// 	MutantStack<int>::iterator ite = mstack.end();
// 	++it;
// 	--it;
// 	while (it != ite) {
//     	std::cout << *it << std::endl; ++it; }
// 	std::stack<int> s(mstack);
// 	return 0;
// }


//// std::list
//int main(){
//	std::list<int> mstack;
//	mstack.push_back(5);
//	mstack.push_back(17);
//	std::cout << mstack.back() << std::endl;
//	mstack.pop_back();
//	std::cout << mstack.size() << std::endl;
//	mstack.push_back(3);
//	mstack.push_back(5);
//	mstack.push_back(737); //[...]
//	mstack.push_back(0);
//	std::list<int>::iterator it = mstack.begin();
//	std::list<int>::iterator ite = mstack.end();
//	++it;
//	--it;
//	while (it != ite) {
//    	std::cout << *it << std::endl; ++it; }
//	std::list<int> s(mstack);
//}

int main(){
	MutantStack<std::string> mstack;
	mstack.push("merry");
	mstack.push("christmas");
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push("happy");
	mstack.push("new");
	mstack.push("year"); //[...]
	mstack.push("🎄");
	MutantStack<std::string>::iterator it = mstack.begin();
	MutantStack<std::string>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite) {
    	std::cout << *it << std::endl; ++it; }
	std::stack<std::string> s(mstack);
	return 0;
}
