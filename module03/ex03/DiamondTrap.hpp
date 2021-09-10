#pragma once

#include "FragTrap.hpp"
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include <string>
#include <iostream>

class DiamondTrap : virtual public FragTrap, virtual public ScavTrap {
private:
	std::string name_diamond_;
public:
	DiamondTrap(const std::string& name);
	~DiamondTrap();
	void whoAmI();
	void attack(const std::string& target);
};