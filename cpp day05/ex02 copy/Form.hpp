#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
    private:
        const std::string   _Name;
        const int           _RaitingSign;
        const int           _RaitingExecute;
        bool                _IsSign;     
    public:
        Form(std::string name, int raitingSign, int raitingExecute);
	    Form(const Form &copy);
	    virtual ~Form();

        Form &operator=(const Form &equals);

        std::string getName() const;
	    int getRaitingSign() const;
        int getRaitingExecute() const;
        bool getIsSign() const;

        void beSigned(Bureaucrat &bur);
        virtual void execute(Bureaucrat const & executor) const = 0;

        class FormNotSign: public std::exception{
            public:
                const char* what() const _NOEXCEPT;
        };

        class GradeTooHighException: public std::exception{
            public:
                const char* what() const _NOEXCEPT;
        };

        class GradeTooLowException: public std::exception{
            public:
                const char* what() const _NOEXCEPT;
        };
};

std::ostream &operator<<(std::ostream &out, const Form &bur);

#endif