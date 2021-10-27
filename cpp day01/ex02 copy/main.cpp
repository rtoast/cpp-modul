#include <iostream>
#include <string>

int main(void){
	std::string str;
	str = "HI THIS IS BRAIN";
	std::string *PTR = &str;
	std::string &REF = str;

	std::cout << "address str: " << &str << std::endl;
	std::cout << "address PTR: " << PTR << std::endl;
	std::cout << "address REF: " << &REF << std::endl;
	std::cout << std::endl;
	std::cout << "contents str: " << str << std::endl;
	std::cout << "contents PTR: " << *PTR << std::endl;
	std::cout << "contents REF: " << REF << std::endl;
	return (0);
}