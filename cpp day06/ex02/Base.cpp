#include "Base.hpp"

Base::~Base(){
}

A::~A(){
}

B::~B(){
}

C::~C(){
}

Base * generate(void){
    std::srand(std::time(0));
	int i = std::rand() % 3;
	if (i == 0)
		return (new A());
	else if (i == 1)
		return (new B());
	else
		return (new C());
	return (nullptr);
}

void identify(Base* p){
	try{
		if (p == nullptr)
			throw "nullptr";
		if (dynamic_cast<A*>(p))
			std::cout << "A" << std::endl;
		if (dynamic_cast<B*>(p))
			std::cout << "B" << std::endl;
		if (dynamic_cast<C*>(p))
			std::cout << "C" << std::endl;
	}
	catch(char const * str){
		std::cerr << str << std::endl;
	}
}

void identify(Base& p){
	try {
		A a = dynamic_cast<A&>(p);
		std::cout << "not A" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << std::endl;
		std::cout << e.what() << std::endl;
	}
	try {
		B b = dynamic_cast<B&>(p);
		std::cout << "not B"  << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	try {
		C c = dynamic_cast<C&>(p);
		std::cout << "not C" << std::endl;
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}
