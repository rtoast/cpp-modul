#include <iostream>

struct Data{
	std::string animal;
	std::string ras;
    std::string name;
};

uintptr_t serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}

int main(void){
	Data Dog;
	Dog.animal = "Dog";
	Dog.ras = "irish wolfhound";
    Dog.name = "Samanta";

	std::cout << "Data address = " << &Dog << std::endl;
	std::cout << "serialize address = " << serialize(&Dog) << std::endl;
    std::cout << "deserialize address = " << deserialize(serialize(&Dog)) << std::endl;
	return (0);
}