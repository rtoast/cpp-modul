#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap{
	protected:
		std::string _Name;
		unsigned int _Hitpoints;
		unsigned int _EnergyPoints;
		unsigned int _AttakDamage;
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap();

		FragTrap& operator= (const FragTrap &equals);
		void highFivesGuys(void);
};

#endif