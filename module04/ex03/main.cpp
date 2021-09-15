#include "Amateria.hpp"
#include "ICharacter.hpp"
#include "Materia.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;
	//return 0;
}

	ICharacter* BIBO = new Character("BOBO");
	ICharacter* BOBO = new Character("BIBO");
	std::cout << BIBO->getName() << std::endl;
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	AMateria* materia;


	materia = src->createMateria("ice");
	BIBO->equip(materia);
	materia = src->createMateria("cure");
	BIBO->equip(materia);
	materia = src->createMateria("sdfds");
	BIBO->equip(materia);


	BIBO->use(0, *BOBO);
	BIBO->use(1, *BOBO);
	BIBO->use(2, *BOBO);
	BIBO->use(123, *BOBO);

	BIBO->unequip(0);
	BIBO->use(0, *BOBO);
}