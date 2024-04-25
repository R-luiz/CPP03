
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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
	FragTrap fragtrap("FragTrap");
	FragTrap fragtrap2(fragtrap);
	FragTrap fragtrap3;
	fragtrap3 = fragtrap2;
	fragtrap.attack("target");
	fragtrap.takeDamage(5);
	fragtrap.beRepaired(5);
	fragtrap.highFivesGuys();
	return 0;
}