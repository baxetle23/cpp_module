#include <iostream>
#include <string>

struct Data {
	std::string name_;
	std::string last_name_;
	int age;
};

uintptr_t serialize(Data* ptr) {
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw) {
	return reinterpret_cast<Data *>(raw);
}

std::ostream& operator<<(std::ostream& out, Data& data) {
	out << "name: " << data.name_ << std::endl;
	out << "last name: " << data.last_name_ << std::endl;
	out << "age: " << data.age << std::endl; 
	return out;
}

int main() {
	Data data;
	std::cout << "Введите name\n";
	std::cin >> data.name_;
	std::cout << "Введите lastname\n";
	std::cin >> data.last_name_;
	std::cout << "Введите age\n";
	std::cin >> data.age;
	
	std::cout << data;
	Data* other_data;
	uintptr_t serialize_data = serialize(&data);
	other_data = deserialize(serialize_data);
	std::cout << std::endl << "Data after serialize\n";
	std::cout << *other_data;
}
