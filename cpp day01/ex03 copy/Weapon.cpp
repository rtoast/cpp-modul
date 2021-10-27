#include "Weapon.hpp"

Weapon::Weapon(string str){
	_type = str;
}

Weapon::~Weapon(){
}

string Weapon::getType(){
	return (_type);
}

void Weapon::setType(string str){
	_type = str;
}

