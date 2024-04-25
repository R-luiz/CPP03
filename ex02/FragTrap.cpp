
#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("default"){
	std::cout << "FragTrap " << this->name << " created" << std::endl;
	this->hitpoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
	std::cout << "FragTrap " << name << " created" << std::endl;
	this->hitpoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &fragtrap) : ClapTrap(fragtrap){
	std::cout << "FragTrap " << fragtrap.name << " copied" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &fragtrap){
	ClapTrap::operator=(fragtrap);
	std::cout << "FragTrap " << fragtrap.name << " assigned" << std::endl;
	return *this;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap " << this->name << " destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void){
	std::cout << "FragTrap " << this->name << " requests a high five" << std::endl;
}

