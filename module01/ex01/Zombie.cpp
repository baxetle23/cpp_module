#include "Zombie.hpp"

Zombie::Zombie() {
	std::cout << "\"BraiiiiiiinnnzzzZ...\"" << std::endl;
}
Zombie::Zombie(const std::string& name) : name_(name) {
	std::cout << name_ << ": \"BraiiiiiiinnnzzzZ...\"" << std::endl;
}
Zombie::~Zombie() {
	std::cout << name_ << ": \"What is dead cannot die...ahahahah\"" << std::endl;
}

void Zombie::SetName(const std::string& name) {
	name_ = name;
}
void Zombie::Anons() {
	std::cout << "This is " << name_ << std::endl;
}