#include "Character.hpp"

Character::Character() {
}
Character::Character(const std::string& name) : name_(name) {
	flag_equip = 0;
}
const std::string& Character::getName() const {
	return name_;
}
void Character::equip(AMateria* m) {
	materia.learnMateria(m);
}
void Character::unequip(int idx) {
	if(idx == 0) 
		flag_equip |= 0x01;
	else if(idx == 1)
		flag_equip |= 0x02;
	else if(idx == 2)
		flag_equip |= 0x04;
	else if(idx == 3)
		flag_equip |= 0x08;
}
bool Character::check_equip(int idx) {
	if(idx == 0) 
		return flag_equip & 0x01;
	else if(idx == 1)
		return flag_equip & 0x02;
	else if(idx == 2)
		return flag_equip & 0x04;
	else if(idx == 3)
		return flag_equip & 0x08;
	return true;
}
void Character::use(int idx, ICharacter& target) {
	if (check_equip(idx)) 
		return ;
	if (materia.createMateria(idx)) {
		if (materia.createMateria(idx)->getType() == "ice")
			std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
		else
			std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
	}
}
Character::~Character() {
}