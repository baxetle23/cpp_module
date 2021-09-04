#include "Karen.hpp"

void Karen::complain(const std::string& level) {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;
	for(; i < 4; ++i)
	{
		if (levels[i] == level)
			break ;
	}
	switch (i)
	{
		case 0:	this->debug();
		case 1:	this->info();
		case 2:	this->warning();
		case 3:	this->error(); return ;
		default: std::cout << "[ Probably complaining about insignificant problems ]\n";
	}
}

Karen::Karen() {
	ptr[0] = &Karen::debug;
	ptr[1] = &Karen::info;
	ptr[2] = &Karen::warning;
	ptr[3] = &Karen::error;
}

void Karen::debug(void) {
	std::cout << "[ DEBUG ]\n";
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!\n";
}

void Karen::info(void) {
	std::cout << "[ INFO ]\n";
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!\n";
}

void Karen::warning(void) {
	std::cout << "[ WARNING ]\n";
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming here for years and you just started working here last month.\n";
}

void Karen::error(void) {
	std::cout << "[ ERROR ]\n";
	std::cout << "This is unacceptable, I want to speak to the manager now.\n";
}