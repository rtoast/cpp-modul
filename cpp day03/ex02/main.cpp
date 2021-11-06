#include "FragTrap.hpp"

int main(void){
	FragTrap elf("elf"), orc("orc");

	elf.attack(orc.getName());
	orc.takeDamage(elf.getAttakDamage());
	orc.attack(elf.getName());
	elf.takeDamage(orc.getAttakDamage());
	elf.beRepaired(1);
	orc.beRepaired(1);

	elf = orc;
	elf.highFivesGuys();
	return (0);
}