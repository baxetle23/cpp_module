#include "Karen.hpp"

int main(int argc, char **argv) {
	if (argc != 2)
		return (0);
	Karen Karen;
	Karen.complain(argv[1]);
}