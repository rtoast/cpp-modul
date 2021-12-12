#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int raiting){
	std::cout << "Default Bureaucrat constructor called" << std::endl;
	if (raiting < 1)
		throw GradeTooHighException();
	if (raiting > 150)
		throw GradeTooLowException();
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

std::string Bureaucrat::getName() const{
	return (_Name);
}

int Bureaucrat::getRaiting() const{
	return (_Raiting);
}

const char* GradeTooHighException::what() const _NOEXCEPT{
	return "Grade too high";
}
const char* GradeTooLowException::what() const _NOEXCEPT{
	return "Grade too low";
}

void Bureaucrat::setIncrementRaiting(){
	if (_Raiting == 1)
		throw GradeTooHighException();
	_Raiting--;
}

void Bureaucrat::setDecrementRaiting(){
	if (_Raiting == 150)
		throw GradeTooLowException();
	_Raiting++;
}

void Bureaucrat::signForm(Form &form){
	try{
		form.beSigned(*this);
		std::cout << _Name << " successfully sign form " << form.getName() << std::endl; 
	}
	catch(std::exception &h){
		std::cout << _Name << " can't sign " << form.getName() << std::endl; 
	}
}

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur){
	out << "Bureaucrat " << bur.getName() << " has an estimate: " << bur.getRaiting() << std::endl;
	return (out);
}
