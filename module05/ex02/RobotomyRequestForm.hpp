#pragma once

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm : public Form {
private:
	RobotomyRequestForm& operator=(const RobotomyRequestForm&);
	RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm&);
	std::string target_;
	void Action() const;
public:
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm();
};