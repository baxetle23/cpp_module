#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon& weapon) : name_(name), weapon_(&weapon){
}
void	HumanA::attack() {
	std::cout << name_ << " attack with : ";
	std::cout << weapon_->GetType() << std::endl;
}