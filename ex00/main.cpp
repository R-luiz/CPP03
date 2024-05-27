
#include "ClapTrap.hpp"

int main(void){
	ClapTrap claptrap("ClapTrap");
	ClapTrap claptrap2(claptrap);
	ClapTrap claptrap3;
	claptrap3 = claptrap2;
	for (int i = 0; i < 12; i++)
		claptrap.attack("target");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	return 0;
}