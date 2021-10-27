#include "Zombie.hpp"

Zombie::Zombie(){
}

Zombie::~Zombie(){
	std::cout << "Zombie " << Zombiename << " died" << std::endl;
}

void Zombie::announce(){
	std::cout << "<" << Zombiename << "> BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setNameZombie(string name){
	Zombiename = name;
}

string Zombie::getNameZombie(){
	return (Zombiename);
}