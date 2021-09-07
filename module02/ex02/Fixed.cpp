#include "Fixed.hpp"

int	Fixed::getRawBits(void) const {
	return (value);
}

void Fixed::setRawBits(const int raw) {
	value = raw;
}

Fixed::Fixed() : value(0) {
}

Fixed::Fixed(const int value_) {
	value = (value_ << bits);
}

Fixed::Fixed(const float value_) {
	value = static_cast<int>((value_) * (1 << bits));
}

Fixed::Fixed(const Fixed& other) {
	value = other.getRawBits();
}

Fixed::~Fixed() {
}

Fixed& Fixed::operator=(Fixed other) {
	value = other.getRawBits();
	return (*this);
}

float Fixed::toInt(void) const{
	return (value >> bits);
}

float Fixed::toFloat(void) const{
	return (static_cast<float>(value) / (1 << bits));
}

const Fixed& Fixed::max(const Fixed& first, const Fixed& second) {
	if (first >= second)
		return first;
	return second;
}
Fixed& Fixed::max(Fixed& first, Fixed& second) {
	if (first >= second)
		return first;
	return second;
}
const Fixed& Fixed::min(const Fixed& first, const Fixed& second) {
	if (first <= second)
		return first;
	return second;
}
Fixed& Fixed::min(Fixed& first, Fixed& second) {
	if (first <= second)
		return first;
	return second;
}

std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
	out << fixed.toFloat();
	return out;
}

Fixed operator+(const Fixed& lhs, const Fixed& rhs) {
	return Fixed(lhs.toFloat() + rhs.toFloat());
}
Fixed operator-(const Fixed& lhs, const Fixed& rhs) {
	return Fixed(lhs.toFloat() - rhs.toFloat());
}
Fixed operator*(const Fixed& lhs, const Fixed& rhs) {
	return Fixed(lhs.toFloat() * rhs.toFloat());
}
Fixed operator/(const Fixed& lhs, const Fixed& rhs) {
	return Fixed(lhs.toFloat() / rhs.toFloat());
}

bool operator<(const Fixed& lhs, const Fixed& rhs) {
	return lhs.toFloat() < rhs.toFloat();
}
bool operator<=(const Fixed& lhs, const Fixed& rhs) {
	return !(lhs < rhs);
}
bool operator==(const Fixed& lhs, const Fixed& rhs) {
	return (!(lhs < rhs) && !(lhs > rhs));
}
bool operator>(const Fixed& lhs, const Fixed& rhs) {
	return (rhs < lhs);
}
bool operator>=(const Fixed& lhs, const Fixed& rhs) {
	return (lhs > rhs || lhs == rhs);
}
bool operator!=(const Fixed& lhs, const Fixed& rhs) {
	return !(lhs == rhs);
}

Fixed& operator++(Fixed& fixed) {
	fixed.setRawBits(fixed.getRawBits() + 1);
	return fixed;
}
Fixed& operator--(Fixed& fixed) {
	fixed.setRawBits(fixed.getRawBits() - 1);
	return fixed;
}
Fixed operator++(Fixed& fixed, int) {
	Fixed tmp = fixed;
	++fixed;
	return tmp;
}
Fixed operator--(Fixed& fixed, int) {
	Fixed tmp = fixed;
	--fixed;
	return tmp;
}