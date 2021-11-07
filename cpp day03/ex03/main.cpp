#include "DiamondTrap.hpp"

int main(void){
    DiamondTrap elf("elf");
    DiamondTrap orc("orc");
	elf.whoAmI();
	elf.attack("orc");
	orc = elf;
	orc.whoAmI();
	return (0);
}