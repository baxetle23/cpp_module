#pragma once
#include <iostream>

template<typename T>
void swap(T& first, T& second) {
	T tmp = first;
	first = second;
	second = tmp;
}

template<typename T>
T min(const T& first, const T& second) {
	return (first >= second) ? second : first;
}

template<typename T>
T max(const T& first, const T& second) {
	return (first > second) ? first : second;
}

class Awesome {
public:
	int n_;
	Awesome(int n) : n_(n) {}
	bool operator==(const Awesome& other) const {return (this->n_ == other.n_);}
	bool operator!=(const Awesome& other) const {return (this->n_ != other.n_);}
	bool operator>(const Awesome& other) const {return (this->n_ > other.n_);}
	bool operator<(const Awesome& other) const {return (this->n_ < other.n_);}
	bool operator<=(const Awesome& other) const {return (this->n_ <= other.n_);}
	bool operator>=(const Awesome& other) const {return (this->n_ >= other.n_);}
};

std::ostream& operator<<(std::ostream& out, const Awesome& awesome) {
	out << "This is awesome " << awesome.n_;
	return out;
}