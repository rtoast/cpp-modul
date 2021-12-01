#include "Brain.hpp"

Brain::Brain(){
	std::cout << "Default Brain constructor called" << std::endl;
	int i = -1;
	while(++i < 100)
		_ideas[i] = "*sound of thought process*";
}

Brain::~Brain(){
	std::cout << "Destructor Brain called" << std::endl;
}

Brain::Brain(const Brain &copy){
	std::cout << "copy Brain constructor called" << std::endl;
	*this = copy;
}

Brain& Brain::operator= (const Brain &equals){
	std::cout << "Assignation Brain operator called" << std::endl;
	if (this == &equals)
		return (*this);
	int i = -1;
	while(++i < 100)
		_ideas[i] = equals._ideas[i];
	return (*this);
}
