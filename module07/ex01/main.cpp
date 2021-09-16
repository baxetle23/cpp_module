#include "iter.hpp"
#include <string>
#include <iostream>

class Awesome {
public:
	int n_;
	Awesome(void) : n_(42) {}
	int get(void) const {return n_;}
};

std::ostream& operator<<(std::ostream &out, const Awesome& rhs) {
	out << rhs.get();
	return out;
}

int main() {
	{
		int array[] = {1, 2, 3, 4, 5, 6};
		size_t size_array = sizeof(array) / sizeof(int);
		iter(array, size_array, print);
	}
	std::cout << std::endl;
	{
		std::string array[] = {"AAA", "BBB", "CCC", "DDD", "EEE", "XXX"};
		size_t size_array = sizeof(array) / sizeof(std::string);
		iter(array, size_array, print);
	}
	std::cout << std::endl;
	{
		int tab[] = {0, 1, 2, 3, 4};
		Awesome tab2[5];
		iter(tab, 5, print);
		iter(tab2, 5, print);
	}
}