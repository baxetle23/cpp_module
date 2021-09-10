#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(const std::string& name) :
	ClapTrap(name + "_clap_name"), FragTrap(name +  "_clap_name"), ScavTrap(name + "_clap_name")  {
	name_diamond_ = name;
	setAtackDamage(30);
	std::cout << "Diamond Trap by " << FragTrap::getName() << " and " << name_diamond_ << " creat\n";
}

DiamondTrap::~DiamondTrap() {
	std::cout << "Diamond Trap by " << getName() << " and " << name_diamond_ << " destroy\n";
}

void DiamondTrap::whoAmI() {
	std::cout << "I am " << ClapTrap::getName() << " and " << name_diamond_ << std::endl;
}

void DiamondTrap::attack(const std::string& target) {
	ScavTrap::attack(target);
}