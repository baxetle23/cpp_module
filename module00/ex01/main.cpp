#include "phone_book.hpp"
#include <iostream>

int main()
{
	PhoneBook phonebook;
	std::string query;
	while(getline(std::cin, query))
		phonebook.Execute_query(query);
}