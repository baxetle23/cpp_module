#pragma once
#include <iostream>

template <typename Array>
void iter(Array* array, size_t size, void function(const Array& arg)) {
	for (size_t i = 0; i < size; ++i) {
		function(array[i]);
	}
}

template <typename T>
void print(const T& x) {
	std::cout << x << std::endl;
	return ;
}