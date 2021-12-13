#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class RobotomyRequestForm : public Form{
    private:
        static int i;
    public:
        RobotomyRequestForm(std::string target);
	    RobotomyRequestForm(const RobotomyRequestForm &copy);
	    virtual ~RobotomyRequestForm();

        void execute(Bureaucrat const & executor) const;
};

#endif