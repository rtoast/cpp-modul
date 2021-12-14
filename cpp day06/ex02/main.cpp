#include "Base.hpp"

int	main(){
	Base *random = generate();

	std::cout << "first class: ";
	identify(random);
	std::cout << "second class: ";
	identify(*random);

	C c;
    std::cout << "first class: ";
	identify(c);
    std::cout << "second class: ";
	identify(&c);

}