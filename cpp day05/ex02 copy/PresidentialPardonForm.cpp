#include "PresidentialPardonForm.hpp"
#include <fstream>


PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form(target, 25, 5){
    std::cout << "Default PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) : Form(copy){
    std::cout << "Default PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void){
    std::cout << "Default PresidentialPardonForm destructor called" << std::endl;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (!getIsSign())
		throw FormNotSign();
	if (executor.getRaiting() > getRaitingExecute())
		throw GradeTooLowException();
    std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}