#pragma once
#include "Form.hpp"
#include <string>

class ShrubberyCreationForm;
class RobotomyRequestForm;
class PresidentialPardonForm;

class Intern {
	Form *ShrubberyCreation(const std::string&);
	Form *RobotomyRequest(const std::string&);
	Form *PresidentialPardon(const std::string&);
	Form *(Intern::*ptr[3])(const std::string&);
	Intern& operator=(const Intern&);
	Intern(const Intern&);
public:
	Intern();
	Form *makeForm(const std::string&, const std::string&);
	~Intern();
};