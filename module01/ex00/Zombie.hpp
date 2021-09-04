#pragma once

#include <string>
#include <iostream>

class Zombie {
private:
	const std::string name_;
	Zombie();
public:
	Zombie(const std::string& name);
	~Zombie();
};

Zombie*	newZombie(const std::string& name);
void	randomChump(const std::string& name);