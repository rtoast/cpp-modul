#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(){
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy){
	std::cout << "copy WrongAnimal constructor called" << std::endl;
	*this = copy;
}

WrongAnimal& WrongAnimal::operator= (const WrongAnimal &equals){
	std::cout << "Assignation WrongAnimal operator called" << std::endl;
	if (this == &equals)
		return (*this);
	_Type = equals._Type;
	return (*this);
}

std::string WrongAnimal::getType(void) const{
	return (_Type);
}

void WrongAnimal::makeSound(void) const{
	std::cout<<"*WrongAnimal sound*"<<std::endl;
}