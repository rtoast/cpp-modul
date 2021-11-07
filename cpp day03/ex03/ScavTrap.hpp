#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap{
	protected:
		std::string _Name;
		unsigned int _Hitpoints;
		unsigned int _EnergyPoints;
		unsigned int _AttakDamage;
		ScavTrap();
	public:
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap &copy);
		~ScavTrap();

		ScavTrap& operator= (const ScavTrap &equals);
		void guardGate();
};

#endif