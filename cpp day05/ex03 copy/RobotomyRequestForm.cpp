#include "RobotomyRequestForm.hpp"
#include <fstream>

int RobotomyRequestForm::i = 0;

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form(target, 72, 45){
    std::cout << "Default RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) : Form(copy){
    std::cout << "Default RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void){
    std::cout << "Default RobotomyRequestForm destructor called" << std::endl;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (!getIsSign())
		throw FormNotSign();
	if (executor.getRaiting() > getRaitingExecute())
		throw GradeTooLowException();
    if(i % 2 == 0)
    {
        std::cout << "*some drilling noises*" << std::endl;
        std::cout << getName() <<  " has been robotomized successfully" << std::endl;
    }
    else
        std::cout << "it’s a failure" << std::endl;
    i++;
}   