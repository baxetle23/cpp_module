#pragma once

#include"Weapon.hpp"
#include <iostream>

class HumanB {
private:
	std::string name_;
	Weapon* weapon_;
public:
	HumanB(const std::string& name);
	void setWeapon(Weapon& weapon);
	void attack();
};