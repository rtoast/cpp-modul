#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

typedef std::string string;

class Weapon{
	private:
		string _type;
	public:
		Weapon(string str);
		~Weapon(void);
		string getType();
		void setType(string str);

};

#endif