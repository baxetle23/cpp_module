#pragma once

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
public:
	FragTrap(const std::string& name);
	void highFivesGuys(void);
	virtual~FragTrap();
};