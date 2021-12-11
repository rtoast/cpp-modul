#include "AAnimal.hpp"

AAnimal::AAnimal(){
	std::cout << "Default AAnimal constructor called" << std::endl;
	_Type = "AAnimal";
}

AAnimal::~AAnimal(){
	std::cout << "Destructor AAnimal called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy){
	std::cout << "copy AAnimal constructor called" << std::endl;
	*this = copy;
}

AAnimal& AAnimal::operator= (const AAnimal &equals){
	std::cout << "Assignation AAnimal operator called" << std::endl;
	if (this == &equals)
		return (*this);
	_Type = equals._Type;
	return (*this);
}

std::string AAnimal::getType(void) const{
	return (_Type);
}
