#pragma once
#include <set>
#include <exception>

class Span {
private:
	std::set<int> array_;
	uint32_t size_;
	Span();
public:
	Span(uint32_t size);
	Span(const Span& other);
	Span& operator=(const Span& other);
	void addNumber(int number);
	template<typename Iterator>
	void addNumber(Iterator first, Iterator second, int count);
	uint32_t shortestSpan() const;
	uint32_t longestSpan() const;
	~Span();
};

template<typename Iterator>
void Span::addNumber(Iterator first, Iterator second, int count) {
	if (array_.size() + count < size_) {
		array_.insert(first, second);
	} else {
		throw std::invalid_argument("Size too small");
	}
}