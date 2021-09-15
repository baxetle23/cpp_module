#pragma once
#include "Amateria.hpp"

class MateriaSource : public IMateriaSource {
private:
	AMateria* materials[4];
	int size_;
public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria*);
	AMateria* createMateria(const std::string& type);
	AMateria* createMateria(int id);
};