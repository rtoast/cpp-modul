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
	    ~Bureaucrat(void);

        Bureaucrat &operator=(const Bureaucrat &equals);

        std::string getName(void) const;
	    int getRaiting(void) const;
};


#endif