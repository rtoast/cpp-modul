#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(): ClapTrap(), ScavTrap(), FragTrap(){
    _Hitpoints = FragTrap::_Hitpoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttakDamage = FragTrap::_AttakDamage;
    std::cout << "Default constructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"){
    ClapTrap::_Name = name + "_clap_name";
    _name = name;
    _Hitpoints = FragTrap::_Hitpoints;
    _EnergyPoints = ScavTrap::_EnergyPoints;
    _AttakDamage = FragTrap::_AttakDamage;
    std::cout << "Name constructor DiamondTrap called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy){
	std::cout << "copy DiamondTrap constructor called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(){
    std::cout << "Destructor DiamondTrap called" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &equals){
    std::cout << "Assignation FragTrap operator called" << std::endl;
	if (this == &equals)
		return (*this);
	_name = equals._name;
	_Hitpoints = equals._Hitpoints;
	_EnergyPoints = equals._EnergyPoints;
	_AttakDamage = equals._AttakDamage;
	return (*this);
}

void DiamondTrap::whoAmI(){
    std::cout << "DiamondTrap name: " << _name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_Name << std::endl;
}

void DiamondTrap::attack(std::string const &target){
    ScavTrap::attack(target);
}