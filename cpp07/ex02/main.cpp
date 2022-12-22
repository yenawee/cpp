#include "Array.hpp"

// normal test
int main(){
	Array<std::string> arr(3);

	std::cout << arr.size() << std::endl;

	arr[0] = std::string("hi");
	arr[1] = std::string("hello");
	arr[2] = std::string("😊");

	std::cout << arr[0] << std::endl;
	std::cout << arr[1] << std::endl;
	std::cout << arr[2] << std::endl;
	Array<std::string> arr_2(arr);

	arr[0] = std::string("😣");
	arr[1] = std::string("bye");
	arr[2] = std::string("forever");

	std::cout << arr_2[0] << std::endl;
	std::cout << arr_2[1] << std::endl;
	std::cout << arr_2[2] << std::endl;

}


// index range
// int main(){
// 	try {
// 		Array<int> arr;
// 		std::cout << arr[1];
// 	}
// 	catch (std::exception & e){
// 		std::cout << e.what() << std::endl;
// 	}
// }
