#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Default Dog constructor called" << std::endl;
    this->_Type = "Dog";
}

Dog::~Dog(){
	std::cout << "Destructor Dog called" << std::endl;
}

Dog::Dog(const Dog &copy){
	std::cout << "copy Dog constructor called" << std::endl;
	*this = copy;
}

Dog& Dog::operator= (const Dog &equals){
	std::cout << "Assignation Dog operator called" << std::endl;
	if (this == &equals)
		return (*this);
	this->_Type = equals._Type;
	return (*this);
}

void Dog::makeSound(void) const{
	std::cout<<"*Dog sound*"<<std::endl;
}