#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
	Bureaucrat bobo("BOBO", 1);
	Bureaucrat biba("BIBA", 150);
	//исключение при создании бюрократа
	try {Bureaucrat bibu("BIBU", -1000);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}

	Form forma("A1", 100, 100);
	//исключение при создании формы
	try {Form test("A2", 1000, 123);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
	//исключение при подписании формы
	try {forma.beSigned(biba);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}

	std::cout << forma;
	forma.beSigned(bobo);
	forma.beSigned(bobo);
	std::cout << forma;
}
