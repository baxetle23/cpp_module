#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) :
	Form("PresidentialPardon_", 25, 5), target_(target) {
	std::cout << "PresidentialPardon_ Form is standart form has 25 grade to sign and 5 to exec\n";
}
PresidentialPardonForm::~PresidentialPardonForm() {
}
void PresidentialPardonForm::Action() const{
	std::cout << target_ << " has been pardoned by Zafod Beeblebrox." << std::endl;
}