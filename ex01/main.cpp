
#include "ScavTrap.hpp"

int main(void){
	ClapTrap claptrap("ClapTrap");
	ClapTrap claptrap2(claptrap);
	ClapTrap claptrap3;
	claptrap3 = claptrap2;
	claptrap.attack("target");
	claptrap.takeDamage(5);
	claptrap.beRepaired(5);
	ScavTrap scavtrap("ScavTrap");
	ScavTrap scavtrap2(scavtrap);
	ScavTrap scavtrap3;
	scavtrap3 = scavtrap2;
	scavtrap.attack("target");
	scavtrap.takeDamage(5);
	scavtrap.beRepaired(5);
	scavtrap.guardGate();
	return 0;
}