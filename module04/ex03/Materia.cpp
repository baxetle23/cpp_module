#include "Materia.hpp"

MateriaSource::MateriaSource() {
	for (int i = 0; i < 4; ++i)
		materials[i] = NULL;
	size_ = 0;
}
void MateriaSource::learnMateria(AMateria* materia) {
	if (size_ > 3)
		return ;
	materials[size_] = materia;
	size_++;
}
AMateria* MateriaSource::createMateria(const std::string& type) {
	for (int i = 0; i < size_; i++) {
		if (type == materials[i]->getType())
			return materials[i];
	}
	return NULL;
}
AMateria* MateriaSource::createMateria(int id) {
	if (id > size_ || id < 0)
		return NULL;
	return materials[id];
}
MateriaSource::~MateriaSource() {
}

