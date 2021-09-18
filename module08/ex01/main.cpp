#include <iostream>
#include "span.hpp"
#include <vector>
#include <random>

int main()
{
	Span sp = Span(1);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp2 = Span(1000);
	std::srand(std::time(nullptr));
	std::vector<int> vector(30);
	std::cout << "30 Random number:\n";
	for(size_t i = 0; i < vector.size(); ++i) {
		int random_variable = std::rand();
		vector[i] = random_variable % 100;
		std::cout << vector[i] << ' ';
	}
	sp2.addNumber(vector.begin(), vector.end(), vector.size());
	std::cout << std::endl;
	std::cout << sp2.shortestSpan() << std::endl;
	std::cout << sp2.longestSpan() << std::endl;
}