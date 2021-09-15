#include <iostream>
#include <string>

class Animal {
protected:
	std::string type_;
public:
	Animal();
	Animal(const Animal& other);
	virtual ~Animal();
	virtual std::string getType() const;
	virtual void makeSound() const;
	Animal& operator=(const Animal& other);
};

class Dog : public Animal {
public:
	Dog();
	Dog(const Dog& other);
	virtual ~Dog();
	virtual void makeSound() const;
	Dog& operator=(const Dog& other);
};

class Cat : public Animal {
public:
	Cat();
	Cat(const Cat& other);
	virtual ~Cat();
	virtual void makeSound() const;
	Cat& operator=(const Cat& other);
};