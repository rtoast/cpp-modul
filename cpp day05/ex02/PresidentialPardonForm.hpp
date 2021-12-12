#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class PresidentialPardonForm : public Form{
    public:
        PresidentialPardonForm(std::string target);
	    PresidentialPardonForm(const PresidentialPardonForm &copy);
	    virtual ~PresidentialPardonForm();

        void execute(Bureaucrat const & executor) const;
};

#endif