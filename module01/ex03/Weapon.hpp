#pragma once

#include <string>

class Weapon {
private:
	std::string name_;
public:
	Weapon();
	Weapon(const std::string& name);
	const std::string& GetType() const;
	void setType(const std::string& name);
};