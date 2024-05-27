
#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitpoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) : name(name), hitpoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap name constructor called, named :"<< name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const & target)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " can't attack, energy points are at 0!" << std::endl;
		return ;
	}
	this->energyPoints--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	this->hitpoints -= amount;
	if (this->hitpoints < 0)
		this->hitpoints = 0;
	std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints == 0)
	{
		std::cout << "ClapTrap " << name << " can't be repaired, energy points are at 0!" << std::endl;
		return ;
	}
	this->hitpoints += amount;
	if (this->hitpoints > 10)
		this->hitpoints = 10;
	this->energyPoints--;
	std::cout << "ClapTrap " << name << " be repaired for " << amount << " points of damage!" << std::endl;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & clap)
{
	std::cout << "ClapTrap assignation operator called" << std::endl;
	name = clap.name;
	hitpoints = clap.hitpoints;
	energyPoints = clap.energyPoints;
	attackDamage = clap.attackDamage;
	return *this;
}

ClapTrap::ClapTrap(ClapTrap const & clap)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = clap;
}