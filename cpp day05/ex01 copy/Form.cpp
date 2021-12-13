#include "Form.hpp"

Form::Form(std::string name, int raitingSign, int raitingExecute) : _Name(name), _RaitingSign(raitingSign), _RaitingExecute(raitingExecute){
	std::cout << "Default Form constructor called" << std::endl;
	if (raitingSign < 1)
		throw GradeTooHighException();
	if (raitingSign > 150)
		throw GradeTooLowException();
    if (raitingExecute < 1)
		throw GradeTooHighException();
	if (raitingExecute > 150)
		throw GradeTooLowException();
	_IsSign = false;
}

Form::~Form(){
	std::cout << "Destructor Form called" << std::endl;
}

Form::Form(const Form &copy) : _Name(copy._Name), _RaitingSign(copy._RaitingSign), _RaitingExecute(copy._RaitingExecute), _IsSign(copy._IsSign){
	std::cout << "copy Form constructor called" << std::endl;
}

Form& Form::operator= (const Form &equals){
	std::cout << "Assignation Form operator called" << std::endl;
	return (*this);
}

std::string Form::getName() const{
	return (_Name);
}

int Form::getRaitingSign() const{
	return (_RaitingSign);
}

int Form::getRaitingExecute() const{
	return (_RaitingExecute);
}

bool Form::getIsSign() const{
	return (_IsSign);
}

void Form::beSigned(Bureaucrat &bur){
	if(bur.getRaiting() > _RaitingSign)
		throw GradeTooLowException();
	_IsSign = true;
}

const char* Form::GradeTooHighException::what() const _NOEXCEPT{
	return "Grade too high";
}
const char* Form::GradeTooLowException::what() const _NOEXCEPT{
	return "Grade too low";
}

std::ostream &operator<<(std::ostream &out, const Form &form){
	out << "Form " << form.getName() << std::endl;
	out << "Has an estimate for sign: " << form.getRaitingSign() << std::endl;
	out << "Has an estimate for execute: " << form.getRaitingExecute() << std::endl;
	out << "Is in status: " << (std::string)((form.getIsSign()) ? ("true") : ("false")) << std::endl;
	return (out);
}
