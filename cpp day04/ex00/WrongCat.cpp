#include "WrongCat.hpp"

WrongCat::WrongCat(){
	std::cout << "Default WrongCat constructor called" << std::endl;
    this->_Type = "WrongCat";
}

WrongCat::~WrongCat(){
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy){
	std::cout << "copy WrongCat constructor called" << std::endl;
	*this = copy;
}

WrongCat& WrongCat::operator= (const WrongCat &equals){
	std::cout << "Assignation WrongCat operator called" << std::endl;
	if (this == &equals)
		return (*this);
	return (*this);
}

void WrongCat::makeSound(void) const{
	std::cout<<"*WrongCat sound*"<<std::endl;
}