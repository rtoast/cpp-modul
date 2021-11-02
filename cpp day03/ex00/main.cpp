#include "ClapTrap.hpp"

int main(void){
	ClapTrap elf("elf"), orc("orc");

	elf.attack(orc.getName());
	orc.takeDamage(elf.getAttakDamage());
	orc.attack(elf.getName());
	elf.takeDamage(orc.getAttakDamage());
	elf.beRepaired(1);
	orc.beRepaired(1);
	return (0);
}