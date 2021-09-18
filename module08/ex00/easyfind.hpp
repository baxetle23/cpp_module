#include <iostream>
#include <algorithm>

template<typename Container>
typename Container::iterator easyfind(Container& container, int value) {
	typename Container::iterator it = std::find(container.begin(), container.end(), value);
	return it;
}