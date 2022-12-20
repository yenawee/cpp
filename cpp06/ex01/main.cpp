#include "Data.hpp"

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

int main(){
	Data *data = new Data;

	uintptr_t ret = serialize(data);
	Data *new_data = deserialize(ret);

	std::cout << "data : " << data << ", new data : " << new_data << std::endl;

}

uintptr_t serialize(Data* ptr){
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw){
	return reinterpret_cast<Data *>(raw);
}
