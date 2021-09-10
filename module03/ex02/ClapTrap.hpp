#pragma once

#include <iostream>
#include <string>

class ClapTrap {
private:
	std::string		name_;
	int	hit_points_;
	int	energy_points_;
	int	attack_damage_;
public:
	ClapTrap(const std::string& name);
	virtual void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	virtual ~ClapTrap();

	std::string getName() const;
	int getHitPoints() const;
	int getEnergyPoints() const;
	int getAtackDamage() const;

	void setHitPoints(int);
	void setEnergyPoints(int);
	void setAtackDamage(int);
};
