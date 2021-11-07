#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "Default ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
	std::cout << "Name ScavTrap constructor called" << std::endl;
	_Name = name;
	_Hitpoints = 100;
	_EnergyPoints = 50;
	_AttakDamage = 20;
}

ScavTrap::~ScavTrap(){
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy){
	std::cout << "copy ScavTrap constructor called" << std::endl;
	*this = copy;
}

ScavTrap& ScavTrap::operator= (const ScavTrap &equals){
	std::cout << "Assignation ScavTrap operator called" << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
	_Hitpoints = equals._Hitpoints;
	_EnergyPoints = equals._EnergyPoints;
	_AttakDamage = equals._AttakDamage;
	return (*this);
}

void ScavTrap::guardGate(){
	std::cout << "ScavTrap have enterred in Gate keeper mode." << std::endl;
}