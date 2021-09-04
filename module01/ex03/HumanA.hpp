#pragma once

#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
	std::string name_;
	Weapon* weapon_;
public:
	HumanA(const std::string& name, Weapon& weapon);
	void attack();
};