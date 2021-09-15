#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target) :
	Form("Shrubbery_", 145, 137), target_(target) {
	std::cout << "Shrubbery Form is standart form has 145 grade to sign and 137 to exec\n";
}
ShrubberyCreationForm::~ShrubberyCreationForm() {
}
void ShrubberyCreationForm::Action() const{
	std::ofstream in(target_ + "_shrubbery.txt");
in << "              #\n"
<<"             ***\n"
<<"            *****\n"
<<"           *****~~\n"
<<"            **~~~\n"
<<"           *~~~***\n"
<<"          ~~~******\n"
<<"         ~~*********\n"
<<"        *************\n"
<<"         ***********\n"
<<"        *************\n"
<<"       ***************\n"
<<"      *****************\n"
<<"     *******************\n"
<<"    *********************\n"
<<"      *****************\n"
<<"     *******************\n"
<<"    *********************\n"
<<"   ***********************\n"
<<"  *************************\n"
<<" ***************************\n"
<<"*****************************\n"
<<"            |||||\n"
<<"            |||||   _8_8_\n"
<<"            |||||  |  |  |_8_\n"
<<"            |||||  |__|__|___|\n" << std::endl;
	in.close();
}
