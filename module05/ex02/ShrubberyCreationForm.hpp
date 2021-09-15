#pragma once

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm : public Form {
private:
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm&);
	ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm&);
	std::string target_;
	void Action() const;
public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm();
};