#pragma once

#include <iostream>
#include <iomanip>
#include <string>

struct Contact {
public:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string secret;
	void Print(size_t i);
	std::string Formating(std::string str);
};

std::istream& operator>>(std::istream& in, Contact& contact);

class PhoneBook {
private:
	Contact contacts[8];
	size_t size_;
	size_t oldest_;

	void Exit();
	void Search();
	void Add(Contact& contact);
public:
	PhoneBook();
	void Execute_query(const std::string& query);
};