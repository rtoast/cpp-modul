#include "Zombie.hpp"

int main(void){
	Zombie* horde;

	horde = zombieHorde(5, "BrainEater");
	for (int i = 0; i < 5; i++){
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}