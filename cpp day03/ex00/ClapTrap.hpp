#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap{
	private:
		std::string _Name;
		unsigned int _Hitpoints;
		unsigned int _EnergyPoints;
		unsigned int _AttakDamage;
		ClapTrap();
	public:
		ClapTrap(std::string name);
		ClapTrap(const ClapTrap &copy);
		~ClapTrap();

		ClapTrap& operator= (const ClapTrap &equals);

		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void) const;
		unsigned int getHitpoints(void) const;
		unsigned int getEnergyPoints(void) const;
		unsigned int getAttakDamage(void) const;

};

#endif