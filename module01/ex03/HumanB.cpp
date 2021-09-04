#include "HumanB.hpp"

HumanB::HumanB(const std::string& name) : name_(name), weapon_(NULL){
}
void HumanB::setWeapon(Weapon& weapon) {
	std::cout << name_ << " set pupersupermegaduper stvol : " << weapon.GetType() << std::endl;
	weapon_ = &weapon;
}
void	HumanB::attack() {
	std::cout << name_ << " attack with : ";
	std::cout << weapon_->GetType() << std::endl;
}