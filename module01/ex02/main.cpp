#include <iostream>
#include <string>

int main() {
	//create
	std::string str = "HI THIS IS BRAIN";
	std::string* str_ptr = &str;
	std::string& str_ref = str;

	//print address
	std::cout << "print address\n";
	std::cout << "address string: " << &str << std::endl;
	std::cout << "address string through pointer: " << str_ptr << std::endl;
	std::cout << "address string through reference: " << &str_ref << std::endl;

	//print string
	std::cout << "print string\n";
	std::cout << "string: " << str << std::endl;
	std::cout << "string through pointer: " << *str_ptr << std::endl;
	std::cout << "string through reference: " << str_ref << std::endl;

}