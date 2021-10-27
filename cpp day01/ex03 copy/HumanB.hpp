#ifndef HUMANB_HPP
#define HUMANB_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string string;

class HumanB{
	private:
		string _name;
		Weapon* _weapon;
	public:
		HumanB(string name);
		~HumanB(void);
		void attack();
		void setWeapon(Weapon& type);
};

#endif