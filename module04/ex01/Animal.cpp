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
	brain_ = new Brain();
	std::cout << "This is Dog\n";
}
Dog::Dog(const Dog& other) {
	brain_ = new Brain(*other.brain_);
	std::cout << "the Dog has budded\n";
}
Dog::~Dog() {
	delete brain_;
	std::cout << "the Dog died\n";
}
void Dog::makeSound() const {
	std::cout << "Gav-Gav\n";
}
void Dog::setIdea(const std::string& str) {
	brain_->setIdea(str);
}
std::string Dog::getIdea() {
	return brain_->getIdea();
}
Dog& Dog::operator=(const Dog& other) {
	if (*this == other)
		return *this;
	type_ = other.type_;
	delete brain_;
	brain_ = new Brain(*other.brain_);
	return *this;
}
bool Dog::operator==(const Dog& other) {
	return *brain_ == *other.brain_;
}

Cat::Cat() : Animal(){
	type_ = "Cat";
	brain_ = new Brain();
	std::cout << "This is Cat\n";
}
Cat::Cat(const Cat& other) {
	brain_ = new Brain(*other.brain_);
	std::cout << "the Cat has budded\n";
}
Cat::~Cat() {
	delete brain_;
	std::cout << "the Cat died\n";
}
void Cat::makeSound() const {
	std::cout << "Myu-Myu\n";
}
void Cat::setIdea(const std::string& str) {
	brain_->setIdea(str);
}
std::string Cat::getIdea() {
	return brain_->getIdea();
}
Cat& Cat::operator=(const Cat& other) {
	if (*this == other)
		return *this;
	type_ = other.type_;
	delete brain_;
	brain_ = new Brain(*other.brain_);
	return *this;
}
bool Cat::operator==(const Cat& other) {
	return *brain_ == *other.brain_;
}