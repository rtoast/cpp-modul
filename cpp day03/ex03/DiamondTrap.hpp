#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap {
    private:
        std::string _name;
    protected:
		unsigned int _Hitpoints;
		unsigned int _EnergyPoints;
		unsigned int _AttakDamage;
    public:
    DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(const DiamondTrap &copy);
	~DiamondTrap();

    DiamondTrap &operator=(const DiamondTrap &equals);

    void whoAmI(void);
    void attack(std::string const &target);
};

#endif