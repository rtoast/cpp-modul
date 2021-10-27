#include "Zombie.hpp"

void randomChump(std::string name){
	Zombie random;
	random.setNameZombie(name);
	random.announce();
}