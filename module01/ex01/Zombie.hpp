#pragma once

#include <string>
#include <iostream>

class Zombie {
private:
	std::string name_;
public:
	Zombie();
	Zombie(const std::string& name);
	~Zombie();
	void SetName(const std::string& name);
	void Anons();
};

Zombie*	newZombie(const std::string& name);
void	randomChump(const std::string& name);
Zombie*	zombieHorde(int N, const std::string& name);