#pragma once

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
	ScavTrap(const std::string& name);
	virtual void attack(const std::string& target);
	void guardGate();
	virtual ~ScavTrap();
};