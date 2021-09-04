#include <iostream>
#include <fstream>
#include <string>

void	check_input(int argc, char **argv) {
	if (argc != 4) {
		std::cerr << "Error\nPlease input filename, string_replace, string_dest\n";
		exit (1);
	}
	std::ifstream input (argv[1]);
	if (!input) {
		std::cerr << "Error\nFilename not correct\n";
		exit (2);
	}
	if (!argv[2] || !argv[3]) {
		std::cerr << "Error\nSrtings are NOT empty\n";
		exit (3);
	}
	input.close();
}

void	replace(std::string& str, std::string src, std::string dst) {
	size_t pos = str.find(src);
	while(pos != std::string::npos) {
		str.erase(pos, src.size());
		str.insert(pos, dst);
		pos = str.find(src, pos + dst.size());
	}
}

int main(int argc, char **argv) {
	check_input(argc, argv);
	std::ifstream input (argv[1]);
	std::string buffer;
	std::string file_string;
	while(std::getline(input, buffer))
		file_string += (buffer + "\n");
	if (file_string.size())
		file_string.erase(file_string.size() - 1);
	replace(file_string, argv[2], argv[3]);
	std::ofstream out(std::string(argv[1]) + ".replace");
	out << file_string;
	out.close();
	input.close();
}