#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class ShrubberyCreationForm : public Form{
    public:
        ShrubberyCreationForm(std::string target);
	    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
	    virtual ~ShrubberyCreationForm();

        void execute(Bureaucrat const & executor) const;
};

#endif