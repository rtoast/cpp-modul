#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "Default FragTrap constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "Name FragTrap constructor called" << std::endl;
	_Name = name;
	_Hitpoints = 100;
	_EnergyPoints = 100;
	_AttakDamage = 30;
}

FragTrap::~FragTrap(){
	std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy){
	std::cout << "copy FragTrap constructor called" << std::endl;
	*this = copy;
}

FragTrap& FragTrap::operator= (const FragTrap &equals){
	std::cout << "Assignation FragTrap operator called" << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
	_Hitpoints = equals._Hitpoints;
	_EnergyPoints = equals._EnergyPoints;
	_AttakDamage = equals._AttakDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void){
	std::cout << "Positive high fives request" << std::endl;
}