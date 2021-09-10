#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : 
	name_(name), 
	hit_points_(10), 
	energy_points_(10), 
	attack_damage_(0) {
	std::cout << "Clap Trap by " << name_  << " creat\n";
}
void ClapTrap::attack(const std::string& target) {
	std::cout << "Clap Trap " << name_  << " attacks " << target << " by " << attack_damage_ << " hits" << std::endl;
	std::cout << energy_points_ << " left energy points\n";
}
void ClapTrap::takeDamage(unsigned int amount) {
	std::cout << "Clap Trap " << name_  << " takes damage " << amount << " hits" << std::endl;
	if (static_cast<long int>(hit_points_) - amount <= 0)
		hit_points_ = 0;
	else
		hit_points_ -= amount;
	std::cout << "Clap Trap " << name_  << " has " << hit_points_ << " hit_points" << std::endl;

}
void ClapTrap::beRepaired(unsigned int amount) {
	std::cout << "Clap Trap " << name_  << "be repaired " << amount << " hits" << std::endl;
	hit_points_ += amount;
}
ClapTrap::~ClapTrap() {
	std::cout << "Clap Trap by " << name_  << " destroy\n";
}

void ClapTrap::setHitPoints(int value) {
	hit_points_ = value;
}
void ClapTrap::setEnergyPoints(int value) {
	energy_points_ = value;
}
void ClapTrap::setAtackDamage(int value) {
	attack_damage_ = value;
}

std::string ClapTrap::getName() const {
	return name_;
}
int ClapTrap::getHitPoints() const {
	return hit_points_;
}
int ClapTrap::getEnergyPoints() const {
	return energy_points_;
}
int ClapTrap::getAtackDamage() const {
	return attack_damage_;
}