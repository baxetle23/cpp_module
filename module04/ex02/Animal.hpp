#include <iostream>
#include <string>
#include "brain.hpp"

class Animal {
protected:
	std::string type_;
public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal() = 0;
	virtual std::string getType() const;
	virtual void makeSound() const;
	Animal& operator=(const Animal& other);
};

class Dog : public Animal {
private:
	Brain* brain_;
public:
	Dog();
	Dog(const Dog& other);
	virtual ~Dog();
	virtual void makeSound() const;
	void setIdea(const std::string& str);
	std::string getIdea();
	Dog& operator=(const Dog& other);
	bool operator==(const Dog& other);
};

class Cat : public Animal {
private:
	Brain* brain_;
public:
	Cat();
	Cat(const Cat& other);
	virtual ~Cat();
	virtual void makeSound() const;
	void setIdea(const std::string& str);
	std::string getIdea();
	Cat& operator=(const Cat& other);
	bool operator==(const Cat& other);
};