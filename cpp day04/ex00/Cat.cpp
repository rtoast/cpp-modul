#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Default Cat constructor called" << std::endl;
    this->_Type = "Cat";
}

Cat::~Cat(){
	std::cout << "Destructor Cat called" << std::endl;
}

Cat::Cat(const Cat &copy){
	std::cout << "copy Cat constructor called" << std::endl;
	*this = copy;
}

Cat& Cat::operator= (const Cat &equals){
	std::cout << "Assignation Cat operator called" << std::endl;
	if (this == &equals)
		return (*this);
	this->_Type = equals._Type;
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout<<"*Cat sound*"<<std::endl;
}