#include "class.hpp"
#include <iostream>
#include <random>
#include <exception>

Base * generate(void) {
	std::srand(std::time(nullptr));
	int random_variable = std::rand();
	if (random_variable % 3 == 0) {
		return new A();
	} else if (random_variable % 3 == 1) {
		return new B();
	} else {
		return new C();
	}
}

void identify(Base* p) {
	if (dynamic_cast<A*>(p))
		std::cout << "This A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "This B\n";
	else
		std::cout << "This C\n";
}

void identify(Base& p) {
	try {
		A& tmp_a = dynamic_cast<A&>(p);
		std::cout << "This A exactly\n";
		(void)tmp_a;
	} catch (std::exception&) {
		try {
			B& tmp_b = dynamic_cast<B&>(p);
			std::cout << "This B exactly\n";
			(void)tmp_b;
		} catch(std::exception&) {
			std::cout << "This C exactly\n";
		}
	}
}

int main() {
	Base *unknow = generate();
	identify(unknow);
	identify(*unknow);
}