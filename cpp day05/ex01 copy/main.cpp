#include "Bureaucrat.hpp"

int main()
{
    {
		Bureaucrat Mark("Mark", 22);
		Form school_21("School21", 21, 1);
		Mark.signForm(school_21);
		std::cout << school_21;
		Mark.setIncrementRaiting();
		Mark.signForm(school_21);
		std::cout << school_21;
	}
	{
		Bureaucrat Elton("Elton", 22);
		try{
			Form school_21("School_21", -1, 1);
		}
		catch(std::exception &e){
			std::cerr<<e.what()<<std::endl;
		}
		try{
			Form school_21("School_21", 151, 1);
		}
		catch(std::exception &e){
			std::cerr<<e.what()<<std::endl;
		}
	}
    return (0);
}