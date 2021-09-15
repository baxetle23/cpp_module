
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

Intern::Intern() {
	ptr[0] = &Intern::ShrubberyCreation;
	ptr[1] = &Intern::RobotomyRequest;
	ptr[2] = &Intern::PresidentialPardon;
}
Intern::~Intern() {

}
Form *Intern::ShrubberyCreation(const std::string& target) {
	return new ShrubberyCreationForm(target);
}
Form *Intern::RobotomyRequest(const std::string& target) {
	return new RobotomyRequestForm(target);
}
Form *Intern::PresidentialPardon(const std::string& target) {
	return new PresidentialPardonForm(target);
}

Form *Intern::makeForm(const std::string& form, const std::string& target) {
	std::string levels[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	int i = 0;
	for(; i < 4; ++i) {
		if (levels[i] == form)
			break ;
	}
	if (i == 4) {
		std::cout << "Error message. Form not find\n";
		return NULL;
	}
	return (this->*ptr[i])(target);
}