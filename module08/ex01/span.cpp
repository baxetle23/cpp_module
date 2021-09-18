#include "span.hpp"

Span::Span(uint32_t size) : size_(size) {
}
Span::Span(const Span& other) : array_(other.array_), size_(other.size_) {
} 
Span& Span::operator=(const Span& other) {
	size_ = other.size_;
	array_ = other.array_;
	return *this;
}
void Span::addNumber(int number) {
	if (array_.size() > size_ || array_.count(number)) {
		throw std::invalid_argument("I cant add number");
	} else {
		array_.insert(number);
		size_++;
	}
}
uint32_t Span::longestSpan() const {
	if (array_.size() < 2) {
		throw std::invalid_argument("Size too small");
	}
	uint32_t max_elem = *(array_.rbegin());
	uint32_t min_elem = *(array_.begin());
	return max_elem - min_elem;
}
uint32_t Span::shortestSpan() const {
	if (array_.size() < 2) {
		throw std::invalid_argument("Size too small");
	}
	int min = INT32_MAX;
	std::set<int>::iterator first = array_.begin();
	std::set<int>::iterator last = array_.end();
	for (; std::next(first) != last; ++first) {
		if (*std::next(first) - *first < min)
			min = *std::next(first) - *first;
	}
	return min;
}
Span::~Span(){}