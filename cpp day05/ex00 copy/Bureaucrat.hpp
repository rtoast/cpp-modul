#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

class Bureaucrat{
    private:
        std::string _Name;
        int         _Raiting;
    public:
        Bureaucrat(std::string name, int raiting);
	    Bureaucrat(const Bureaucrat &copy);
	    ~Bureaucrat();

        Bureaucrat &operator=(const Bureaucrat &equals);

        std::string getName() const;
	    int getRaiting() const;

        void setIncrementRaiting();
        void setDecrementRaiting();

        class GradeTooHighException: public std::exception{
            public:
                const char* what() const _NOEXCEPT;
        };

        class GradeTooLowException: public std::exception{
            public:
                const char* what() const _NOEXCEPT;
        };  
};

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bur);

#endif