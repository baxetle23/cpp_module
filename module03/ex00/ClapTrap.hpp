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
	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	~ClapTrap();
};
