#pragma once

#include "Form.hpp"

class PresidentialPardonForm : public Form {
private:
	PresidentialPardonForm& operator=(const PresidentialPardonForm&);
	PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm&);
	std::string target_;
	void Action() const;
public:
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm();
};