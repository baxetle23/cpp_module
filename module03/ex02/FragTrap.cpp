#include "FragTrap.hpp"

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "Frag Trap by " << name  << " creat\n";
	setHitPoints(100);
	setEnergyPoints(100);
	setAtackDamage(30);
}
void FragTrap::highFivesGuys() {
	std::cout << "Frag Trap " << getName()  << " has positive high fives request" << std::endl;
}
FragTrap::~FragTrap() {
	std::cout << "Frag Trap by " << getName()  << " destroy\n";
}