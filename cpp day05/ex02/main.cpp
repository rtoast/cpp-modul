#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main()
{
    {
		ShrubberyCreationForm form("bla");
		Bureaucrat Mark("Mark", 138);
		Mark.signForm(form);
		Mark.execForm(form);
		Mark.setIncrementRaiting();
		Mark.execForm(form);
	}

	{
		ShrubberyCreationForm form("glass");
		Bureaucrat Elton("Elton", 1);
		Elton.execForm(form);
	}

	{
		RobotomyRequestForm form("Robotomy");
		Bureaucrat Vally("Vally", 1);
		Vally.signForm(form);
		Vally.execForm(form);
		Vally.execForm(form);
	}

	{
		PresidentialPardonForm form("MUA");
		Bureaucrat Eva("Eva", 100);
		Eva.signForm(form);
		Eva.execForm(form);
	}
	{
		PresidentialPardonForm form("MUA");
		Bureaucrat Eva("Eva", 1);
		Eva.signForm(form);
		Eva.execForm(form);
	}
    return (0);
}