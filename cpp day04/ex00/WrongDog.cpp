#include "WrongDog.hpp"

WrongDog::WrongDog(){
	std::cout << "Default WrongDog constructor called" << std::endl;
    this->_Type = "WrongDog";
}

WrongDog::~WrongDog(){
	std::cout << "Destructor WrongDog called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy){
	std::cout << "copy WrongDog constructor called" << std::endl;
	*this = copy;
}

WrongDog& WrongDog::operator= (const WrongDog &equals){
	std::cout << "Assignation WrongDog operator called" << std::endl;
	if (this == &equals)
		return (*this);
	return (*this);
}

void WrongDog::makeSound(void) const{
	std::cout<<"*WrongDog sound*"<<std::endl;
}