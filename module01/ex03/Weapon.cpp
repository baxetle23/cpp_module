#include "Weapon.hpp"

Weapon::Weapon(){
}
Weapon::Weapon(const std::string& name) : name_(name){
}
const std::string& Weapon::GetType() const {
	return name_;
}
void Weapon::setType(const std::string& name) {
	name_ = name;
}