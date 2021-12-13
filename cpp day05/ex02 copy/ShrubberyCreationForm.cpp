#include "ShrubberyCreationForm.hpp"
#include <fstream>


ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form(target, 145, 137){
    std::cout << "Default ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : Form(copy){
    std::cout << "Default ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void){
    std::cout << "Default ShrubberyCreationForm destructor called" << std::endl;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const{
	if (!getIsSign())
		throw FormNotSign();
	if (executor.getRaiting() > getRaitingExecute())
		throw GradeTooLowException();
	std::ofstream outFile(getName() + "__shrubbery");
	outFile << " \n \
                *  \n \
               *** \n \
              ***** \n \
            ********* \n \
                * \n \
                *";
}  