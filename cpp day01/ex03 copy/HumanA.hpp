#ifndef HUMANA_HPP
#define HUMANA_HPP

#include <iostream>
#include <string>
#include "Weapon.hpp"

typedef std::string string;

class HumanA{
	private:
		string _name;
		Weapon &_weapon;
		HumanA(void);
	public:
		~HumanA(void);
		HumanA(string name, Weapon& weapon);
		void attack();
};

#endif