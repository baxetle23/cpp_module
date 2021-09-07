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

Fixed::Fixed(const int value_) {
	std::cout << "Int constructor called\n";
	value = (value_ << bits);
}

Fixed::Fixed(const float value_) {
	std::cout << "Float constructor called\n";
	value = static_cast<int>((value_) * (1 << bits));
}

Fixed::Fixed(const Fixed& other) {
	std::cout << "Copy constructor called\n";
	value = other.getRawBits();
}

Fixed::~Fixed() {
	std::cout << "Destructor called\n";
}

Fixed& Fixed::operator=(Fixed other) {
	std::cout << "Assignation operator called\n";
	value = other.getRawBits();
	return (*this);
}

int Fixed::toInt(void) const{
	return (value >> bits);
}

float Fixed::toFloat(void) const{
	return (static_cast<float>(value) / (1 << bits));
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}