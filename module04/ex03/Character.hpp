#pragma once

#include "ICharacter.hpp"
#include "Materia.hpp"
#include "Amateria.hpp"
#include <iostream>

class Character : public ICharacter {
private:
	int size;
	unsigned char flag_equip;
	std::string name_;
	MateriaSource materia;
	bool check_equip(int idx);
public:
	Character();
	Character(const Character& other);
	Character(const std::string& name);
	std::string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	~Character();
};