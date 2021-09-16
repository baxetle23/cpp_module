#include <iostream>
#include <string>
#include <stdlib.h>
#include <iomanip>
#include <math.h>
#include <limits>

void input_char(double number) {
	if (isprint(number)) {
		char char_ = static_cast<char>(number);
		std::cout << "char: \'" << char_ << "\'\n";
		return ;
	} else if (number > 256 || number < -257 || isnan(number)) {
		std::cout << "char: impossible\n";
		return ;
	} else {
		std::cout << "char: Non displayable\n";
	}
}

void input_int(double number) {
	if (number > INT32_MAX || number < INT32_MIN || isnan(number)) {
		std::cout << "int: impossible\n";
		return ;
	}
	int int_ = static_cast<int>(number);
	std::cout << "int: " << int_ << "\n";
	return ;

}

bool ckeck_comma(std::string& str) {
	if (str.find('.') != std::string::npos) {
		for(size_t i = str.find('.') + 1; i < str.size(); ++i) {
			if (str[i] >= '1' && str[i] <= '9')
				return true;
		}
	} else {
		return false;
	}
	return false;
}

void input_float(double number, std::string& string) {
	float float_ = static_cast<float>(number);
	std::cout << "float: " << float_;
	if (ckeck_comma(string) || isnan(number) || number == std::numeric_limits<double>::infinity() || number == -std::numeric_limits<double>::infinity()) {
		std::cout << "f" <<std::endl;
	} else {
		std::cout << ".0f" << std::endl;
	}
}

void input_double(double number, std::string& string) {
	std::cout << "double: " << number;
	if (ckeck_comma(string) || isnan(number) || number == std::numeric_limits<double>::infinity() || number == -std::numeric_limits<double>::infinity()) {
		std::cout << std::endl;
	} else {
		std::cout << ".0" << std::endl;
	}
}

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "I work only with one argument\n";
		return (0);
	}
	double double_ = strtold(argv[1], NULL);
	std::string tmp = argv[1];
	input_char(double_);
	input_int(double_);
	input_float(double_, tmp);
	input_double(double_, tmp);
}