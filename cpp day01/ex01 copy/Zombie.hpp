#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>

typedef std::string string;

class Zombie{
	private:
		string Zombiename;
	public:
		Zombie(void);
		~Zombie(void);
		void announce(void);
		void setNameZombie(string name);
		string getNameZombie(void);

};

Zombie* zombieHorde( int N, std::string name );

#endif