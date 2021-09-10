#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name) {
	std::cout << "Scav Trap by " << name  << " creat\n";
	setHitPoints(100);
	setEnergyPoints(50);
	setAtackDamage(20);
}
void ScavTrap::attack(const std::string& target) {
	std::cout << "Scav Trap " << getName()  << " attacks " << target << " by " << getAtackDamage() << " hits" << std::endl;
	std::cout << getEnergyPoints() << " left energy points\n";
}
void ScavTrap::guardGate() {
	std::cout << "Scav Trap " << getName()  << " have enterred in Gate keeper mode." << std::endl;
}
ScavTrap::~ScavTrap() {
	std::cout << "Scav Trap by " << getName()  << " destroy\n";
}