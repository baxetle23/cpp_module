#include "Fixed.hpp"

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called\n";
	return (value);
}

void Fixed::setRawBits(const int raw) {
	value = raw;
}

Fixed::Fixed() : value(0) {
	std::cout << "Default constructor called\n";
}

Fixed::Fixed(Fixed& other) {
	std::cout << "Copy constructor called\n";
	value = other.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(Fixed& other) {
	std::cout << "Assignation operator called\n";
	value = other.getRawBits();
	return (*this);
}