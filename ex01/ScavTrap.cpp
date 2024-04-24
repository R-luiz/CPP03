
#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("ScavTrap")
{
	this->hitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hitpoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap name constructor called, named :"<< name << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & scav) : ClapTrap(scav)
{
	this->name = scav.name;
	this->hitpoints = scav.hitpoints;
	this->energyPoints = scav.energyPoints;
	this->attackDamage = scav.attackDamage;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(std::string const & target)
{
	if (energyPoints == 0)
	{
		std::cout << "ScavTrap " << name << " is out of energy" << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << name << " attack " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << name << " have enterred in Gate keeper mode" << std::endl;
}
 