#include "Dog.hpp"

Dog::Dog(){
	std::cout << "Default Dog constructor called" << std::endl;
    this->_Type = "Dog";
	_idea = new Brain();
}

Dog::~Dog(){
	std::cout << "Destructor Dog called" << std::endl;
	delete _idea;
}

Dog::Dog(const Dog &copy){
	std::cout << "copy Dog constructor called" << std::endl;
	_idea = new Brain();
	*this = copy;
}

Dog& Dog::operator= (const Dog &equals){
	std::cout << "Assignation Dog operator called" << std::endl;
	if (this == &equals)
		return (*this);
	this->_Type = equals._Type;
	*_idea= *equals._idea;
	return (*this);
}

void Dog::makeSound(void) const{
	std::cout<<"*Dog sound*"<<std::endl;
}

std::string Dog::getIdea(int i){
	return (_idea->getIdea(i));
}