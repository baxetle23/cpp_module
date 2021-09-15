#include "Amateria.hpp"

AMateria::AMateria() {
}
const std::string& AMateria::getType() const {
	return type_;
}
AMateria::AMateria(const std::string& type) : type_(type) {
}
void AMateria::use(ICharacter& target) {
	(void)target;
}
AMateria::~AMateria() {
}