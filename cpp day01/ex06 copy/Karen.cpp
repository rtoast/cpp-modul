#include "Karen.hpp"

Karen::Karen(){
	mas[0] = "DEBUG";
	mas[1] = "INFO";
	mas[2] = "WARNING";
	mas[3] = "ERROR";
}

Karen::~Karen(){
}

void Karen::debug(void){
	std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void Karen::info(void){
	std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Karen::warning(void){
	std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Karen::error(void){
	std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Karen::complain(std::string level){
	int i = compare(level);
	switch (i){
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			errorStr();
	}
}

void Karen::errorStr(void){
	std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}

int Karen::compare(std::string str){
	int i = 0;
	while (i < 4)
	{
		if (str == mas[i])
			return (i);
		i++;
	}
	return (4);
}