
#pragma once
#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string name;
		int hitpoints;
		int energyPoints;
		int attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & clap);
		~ClapTrap();
		void attack(std::string const & target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		ClapTrap & operator=(ClapTrap const & clap);
};