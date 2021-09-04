#include <iostream>
#include <string>

class Megaphone {
private:
	std::string message_;

	void MessageToUpper() {
		for (size_t i = 0; i < message_.size(); ++i) {
			message_[i] = toupper(message_[i]);
		}
	}

public:
	Megaphone (char **argv) {
		for (size_t i = 1; argv[i] != NULL; ++i) {
			if (i != 1) {
				message_ += (std::string(" ") + std::string(argv[i]));
			} else {
				message_ += std::string(argv[i]);
			}
		}
	}

	void PrintMessage() {
		if (!message_.size()) {
			std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
			return ;
		}
		MessageToUpper();
		std::cout << message_ << std::endl;
	}
};

int main(int, char **argv) {
	Megaphone phone(argv);
	phone.PrintMessage();
}