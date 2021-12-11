#include "Cat.hpp"

Cat::Cat(){
	std::cout << "Default Cat constructor called" << std::endl;
    this->_Type = "Cat";
	_idea = new Brain();
}

Cat::~Cat(){
	std::cout << "Destructor Cat called" << std::endl;
	delete _idea;
}

Cat::Cat(const Cat &copy){
	std::cout << "copy Cat constructor called" << std::endl;
	_idea = new Brain();
	*this = copy;
}

Cat& Cat::operator= (const Cat &equals){
	std::cout << "Assignation Cat operator called" << std::endl;
	if (this == &equals)
		return (*this);
	this->_Type = equals._Type;
	*_idea= *equals._idea;
	return (*this);
}

void Cat::makeSound(void) const{
	std::cout<<"*Cat sound*"<<std::endl;
}

std::string Cat::getIdea(int i){
	return (_idea->getIdea(i));
}