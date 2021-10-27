#include "Zombie.hpp"

int main(void)
{
	Zombie zik;
	zik.setNameZombie("Zik");
	zik.announce();

	Zombie* Mike  = newZombie("Mike");
	Mike->announce();

	randomChump("Rand");
	
	delete Mike;
	return (0);
}