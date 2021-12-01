#include "Animal.hpp"

Animal::Animal(){
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::~Animal(){
	std::cout << "Destructor Animal called" << std::endl;
}

Animal::Animal(const Animal &copy){
	std::cout << "copy Animal constructor called" << std::endl;
	*this = copy;
}

Animal& Animal::operator= (const Animal &equals){
	std::cout << "Assignation Animal operator called" << std::endl;
	if (this == &equals)
		return (*this);
	_Type = equals._Type;
	return (*this);
}

std::string Animal::getType(void) const{
	return (_Type);
}

void Animal::makeSound(void) const{
	std::cout<<"*Animal sound*"<<std::endl;
}