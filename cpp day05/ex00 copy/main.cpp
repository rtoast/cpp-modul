#include "Bureaucrat.hpp"

int main()
{
    try{
        Bureaucrat Mark("Mark", 0);
    }
    catch(std::exception &M){
        std::cerr << M.what() << std::endl;
    }

    Bureaucrat Elton("Elton", 2);
    std::cout << Elton;

    Elton.setIncrementRaiting();
    std::cout << Elton;

    try{
        Elton.setIncrementRaiting();
    }
    catch(std::exception &E){
        std::cerr << E.what() << std::endl;
    }
    std::cout << Elton;
    return (0);
}