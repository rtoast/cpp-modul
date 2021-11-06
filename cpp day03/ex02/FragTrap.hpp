#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap{
	private:
		FragTrap();
	public:
		FragTrap(std::string name);
		FragTrap(const FragTrap &copy);
		~FragTrap();

		FragTrap& operator= (const FragTrap &equals);
		void highFivesGuys(void);
};

#endif