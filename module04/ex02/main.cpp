#include "Animal.hpp"

int main()
{
	//Animal animal; //pure abstract class

	Animal* array_animal[10];
	for(int i = 0; i < 10; ++i) {
		if (i < 5)
			array_animal[i] = new Dog();
		else
			array_animal[i] = new Cat();
	}
	std::cout << std::endl;
	for(int i = 0; i < 10; ++i) {
		std::cout << array_animal[i]->getType() << " ";
		array_animal[i]->makeSound();
	}
	std::cout << std::endl;
	for(int i = 0; i < 10; ++i) {
		delete array_animal[i];
	}

	Cat *cat_vasya = new Cat();
	Cat *cat_murka = new Cat();

	cat_vasya->setIdea("milk");
	cat_murka->setIdea("cucumber");

	std::cout << "Vasya likes " << cat_vasya->getIdea() << std::endl;
	std::cout << "Murka likes " << cat_murka->getIdea() << std::endl << std::endl;

	*cat_vasya = *cat_murka;

	std::cout << "Vasya likes " << cat_vasya->getIdea() << std::endl;
	std::cout << "Murka likes " << cat_murka->getIdea() << std::endl;

	delete cat_murka;
	delete cat_vasya;
}
