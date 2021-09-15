#include"Animal.hpp"

Animal::Animal() {
	std::cout << "the animal was born\n";
}
Animal::Animal(const Animal&) {
	std::cout << "the animal has budded\n";
}
Animal::~Animal() {
	std::cout << "the animal died\n";
}
Animal& Animal::operator=(const Animal&) {
	return *this;
}
std::string Animal::getType() const {
	return type_;
}
void Animal::makeSound() const {
	std::cout << "I am animal and not have sound\n";
}

Dog::Dog() : Animal(){
	type_ = "Dog";
	std::cout << "This is Dog\n";
}
Dog::Dog(const Dog&) {
	std::cout << "the Dog has budded\n";
}
Dog::~Dog() {
	std::cout << "the Dog died\n";
}
void Dog::makeSound() const {
	std::cout << "Gav-Gav\n";
}
Dog& Dog::operator=(const Dog& other) {
	type_ = other.type_;
	return *this;
}

Cat::Cat() : Animal(){
	type_ = "Cat";
	std::cout << "This is Cat\n";
}
Cat::Cat(const Cat&) {
	std::cout << "the Cat has budded\n";
}
Cat::~Cat() {
	std::cout << "the Cat died\n";
}
void Cat::makeSound() const {
	std::cout << "Myu-Myu\n";
}
Cat& Cat::operator=(const Cat& other) {
	type_ = other.type_;
	return *this;
}