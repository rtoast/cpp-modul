#include "HumanB.hpp"

HumanB::HumanB(string name){
	_name = name;
}

HumanB::~HumanB(){
}

void HumanB::setWeapon(Weapon& type){
	_weapon = &type;
}

void HumanB::attack(){
	std::cout << "<" << _name << "> attacks with his " << _weapon->getType() << std::endl;
}