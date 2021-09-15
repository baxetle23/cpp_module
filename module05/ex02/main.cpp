#include <exception>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

int main() {
	Bureaucrat bobo("BOBO", 1);
	Bureaucrat biba("BIBA", 150);

	try {Bureaucrat bibu("BIBU", -1000);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}

	std::cout << std::endl << std::endl;
	ShrubberyCreationForm test("dom");
	test.beSigned(bobo);
	test.execute(bobo);

	std::cout << std::endl << std::endl;
	PresidentialPardonForm test1("Shrek");
	try {test1.beSigned(biba);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
	test1.beSigned(bobo);
	try {test1.execute(biba);}
	catch(std::exception & e) {std::cout << e.what() << std::endl;}
	test1.execute(bobo);

	std::cout << std::endl << std::endl;
	RobotomyRequestForm test2("Random");
	test2.beSigned(bobo);
	test2.execute(bobo);
}
