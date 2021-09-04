#include "phone_book.hpp"

PhoneBook::PhoneBook() : size_(0), oldest_(1) {
}

void PhoneBook::Execute_query(const std::string& query) {
	if (query == "EXIT") {
		Exit();
	} else if (query == "ADD") {
		Contact contact;
		std::cin >> contact;
		Add(contact);
	} else if (query == "SEARCH") {
		if (size_) {
			Search();
		} else {
			std::cout << "PhoneBook empty(" << std::endl;
		}
	} else {
		std::cout << "Please print valid query : \"EXIT\", \"ADD\", \"SEARCH\"" << std::endl;
	}
}

void PhoneBook::Exit() {
	exit(0);
}

void PhoneBook::Search()
{
	for(size_t i = 0; i < size_; ++i) {
		contacts[i].Print(i);
	}
	std::cout << "PLEASE INPUT NUMBER CONTACT\n";
	int number;
	std::cin >> number;
	if (number < 1 || number > (int)size_) {
		std::cin.clear();
		std::cout << "Contact does not exist\n";
		return ;
	}
	std::cout << contacts[number - 1].first_name << std::endl;
	std::cout << contacts[number - 1].last_name << std::endl;
	std::cout << contacts[number - 1].nickname << std::endl;
	std::cout << contacts[number - 1].phone_number << std::endl;
	std::cout << contacts[number - 1].secret << std::endl;
}

std::string Contact::Formating(std::string str) {
	if (str.size() > 10) {
		str.resize(9);
		str.push_back('.');
	}
	return str;
}

void PhoneBook::Add(Contact& contact) {
	if (size_ == 8) {
		contacts[oldest_ - 1] = contact;
		oldest_ = oldest_ % 8 + 1;
	} else {
		contacts[size_] = contact;
		size_++;
	}
}

void Contact::Print(size_t index) {
	std::cout << std::setw(10) << index + 1;
	std::cout << '|';
	std::cout << std::setw(10) << Formating(this->first_name);
	std::cout << '|';
	std::cout << std::setw(10) << Formating(this->last_name);
	std::cout << '|';
	std::cout << std::setw(10) << Formating(this->nickname);
	std::cout << '|' << std::endl;
}

std::istream& operator>>(std::istream& in, Contact& contact) {
	std::cout << "Print first name\n";
	in >> contact.first_name;
	std::cout << "Print last name\n";
	in >> contact.last_name;
	std::cout << "Print nickname\n";
	in >> contact.nickname;
	std::cout << "Print phone number\n";
	in >> contact.phone_number;
	std::cout << "Print secret\n";
	in >> contact.secret;
	return in;
}