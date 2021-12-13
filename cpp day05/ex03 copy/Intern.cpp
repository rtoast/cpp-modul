#include "Intern.hpp"

Intern::Intern(){
    std::cout << "Default Intern constructor called" << std::endl;
}

Intern::Intern(const Intern &copy){
    std::cout << "Default Intern copy constructor called" << std::endl;
}

Intern::~Intern(void){
    std::cout << "Default Intern destructor called" << std::endl;
}

Intern& Intern::operator= (const Intern &equals){
	std::cout << "Assignation Intern operator called" << std::endl;
	return (*this);
}

Form *Intern::makeForm(std::string name, std::string target){
    int i = comar(name);
    Form *form = NULL;
	switch (i){
		case 0:
			form = new ShrubberyCreationForm(target);
            break;
		case 1:
			form = new RobotomyRequestForm(target);
            break;
		case 2:
			form = new PresidentialPardonForm(target);
            break;
	}
    return (form);
}

int Intern::comar(std::string name){
	std::string mas[3] = {"shrubbery creation",
							"robotomy request",
							"presidential pardon"};
    int i = 0;
	while (i < 3)
	{
		if (name == mas[i])
			return (i);
		i++;
	}
    return (3);
}