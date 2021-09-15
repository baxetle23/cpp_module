#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) :
	Form("RobotomyRequestForm_", 72, 45), target_(target) {
	std::cout << "RobotomyRequestForm_ Form is standart form has 72 grade to sign and 45 to exec\n";
}
RobotomyRequestForm::~RobotomyRequestForm() {
}
void RobotomyRequestForm::Action() const{
	std::srand(std::time(nullptr));
    int random_variable = std::rand();
	if (random_variable % 2)
		std::cout << "The God of random has appeared\n";
	else
		std::cout << "We'll try it tomorrow\n";
}