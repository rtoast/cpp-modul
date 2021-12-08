#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int raiting){
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	_Name = name;
    _Raiting = raiting;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Destructor Bureaucrat called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy){
	std::cout << "copy Bureaucrat constructor called" << std::endl;
	*this = copy;
}

Bureaucrat& Bureaucrat::operator= (const Bureaucrat &equals){
	std::cout << "Assignation Bureaucrat operator called" << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
    _Raiting = equals._Raiting;
	return (*this);
}

std::string Bureaucrat::getName(void) const{
	return (_Name);
}

int Bureaucrat::getRaiting(void) const{
	return (_Raiting);
}
