#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
	std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	std::cout << "Name ClapTrap constructor called" << std::endl;
	_Name = name;
	_Hitpoints = 10;
	_EnergyPoints = 10;
	_AttakDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &copy){
	std::cout << "copy ClapTrap constructor called" << std::endl;
	*this = copy;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap& ClapTrap::operator= (const ClapTrap &equals){
	std::cout << "Assignation ClapTrap operator called" << std::endl;
	if (this == &equals)
		return (*this);
	_Name = equals._Name;
	_Hitpoints = equals._Hitpoints;
	_EnergyPoints = equals._EnergyPoints;
	_AttakDamage = equals._AttakDamage;
	return (*this);
}

void ClapTrap::attack(std::string const & target){
	if (_EnergyPoints > 0){
		std::cout << _Name << " attack " << target << ", causing " << _AttakDamage << " points of damage!" << std::endl;
		_EnergyPoints--;
	}
	else
		std::cout << _Name << " not enough attack points " << target << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout<< _Name << " received " << amount << " points of damage";
	if (amount >= _Hitpoints){
		std::cout << " and died" << std::endl;
		_Hitpoints = 0;
	}
	else{
		std::cout << std::endl;
		_Hitpoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	std::cout << _Name << " received " << amount << " points of energy" <<std::endl;
	_EnergyPoints += amount;
}

std::string ClapTrap::getName(void) const{
	return(_Name);
}

unsigned int ClapTrap::getHitpoints(void) const{
	return(_Hitpoints);
}

unsigned int ClapTrap::getEnergyPoints(void) const{
	return(_EnergyPoints);
}

unsigned int ClapTrap::getAttakDamage(void) const{
	return(_AttakDamage);
}
