#pragma once

#include "Amateria.hpp"

class Ice : public AMateria {
public:
	Ice();
	Ice(const Ice& other);
	~Ice();
	AMateria* clone() const;
	Ice& operator=(const Ice& other);
};