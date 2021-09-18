#include "easyfind.hpp"
#include <vector>
#include <deque>
#include <forward_list>

int main() {
	std::vector<int> v {1,2,3,4,5,6};
	std::vector<int>::iterator it_vec = easyfind(v, 4);
	if (it_vec == v.end()) {
		std::cout << "Element not find\n";
	} else {
		std::cout << "Index: " << -(v.begin() - it_vec)
				  << " Element: " <<  *it_vec << std::endl;
	}

	std::deque<double> d {12,32,1,-23};
	std::deque<double>::iterator it_deq = easyfind(d, 12);
	if (it_deq == d.end()) {
		std::cout << "Element not find\n";
	} else {
		std::cout << "Index: " << -(d.begin() - it_deq)
				  << " Element: " <<  *it_deq << std::endl;
	}

	std::forward_list<char> l {'s','c', 'h','o','o','l'};
	std::forward_list<char>::iterator it_list = easyfind(l, 'o');
	if (it_list == l.end()) {
		std::cout << "Element not find\n";
	} else {
		std::cout << "Element: " <<  *it_list << std::endl;
	}
}