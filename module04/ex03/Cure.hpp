#pragma once
#include "Amateria.hpp"

class Cure : public AMateria {
private:

public:
	Cure();
	Cure(const Cure& other);
	~Cure();
	AMateria* clone() const;
	Cure& operator=(const Cure& other);
};