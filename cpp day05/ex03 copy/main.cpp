#include "Intern.hpp"

int main()
{
    Intern Mark;
	Form* form;

	form = Mark.makeForm("robotomy request", "wrong target");
	std::cout<<*form<<std::endl;
	delete form;
	form = Mark.makeForm("shrubbery creation", "meaning of life");
	std::cout<<*form<<std::endl;
	delete form;
	form = Mark.makeForm("presidential pardon", "Help");
	std::cout<<*form<<std::endl;
	delete form;

    return (0);
}