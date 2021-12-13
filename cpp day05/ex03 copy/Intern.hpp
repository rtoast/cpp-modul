#ifndef INTERN_HPP
#define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
    private:
        int comar(std::string name);
    public:
        Intern();
	    Intern(const Intern &copy);
	    ~Intern();

        Intern &operator=(const Intern &equals);

        Form *makeForm(std::string name, std::string target);
};

#endif