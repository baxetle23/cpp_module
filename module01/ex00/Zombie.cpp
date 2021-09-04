#include "Zombie.hpp"

Zombie::Zombie(const std::string& name) : name_(name) {
	std::cout << name_ << ": \"BraiiiiiiinnnzzzZ...\"" << std::endl;
}
Zombie::~Zombie() {
	std::cout << name_ << ": \"What is dead cannot die...ahahahah\"" << std::endl;
}