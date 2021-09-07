#pragma once
#include <iostream>
#include <cmath>

class Fixed {
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	explicit Fixed(const int value);
	explicit Fixed(const float value);
	Fixed(const Fixed& other);
	Fixed& operator=(Fixed other);
	int getRawBits(void) const;
	void setRawBits(const int raw);

	float toFloat(void) const;
	float toInt(void) const;

	static const Fixed& max(const Fixed& first, const Fixed& second);
	static Fixed& max(Fixed& first, Fixed& second);
	static const Fixed& min(const Fixed& first, const Fixed& second);
	static Fixed& min(Fixed& first, Fixed& second);

	~Fixed();
};

Fixed operator+(const Fixed& lhs, const Fixed& rhs);
Fixed operator-(const Fixed& lhs, const Fixed& rhs);
Fixed operator*(const Fixed& lhs, const Fixed& rhs);
Fixed operator/(const Fixed& lhs, const Fixed& rhs);

bool operator<(const Fixed& lhs, const Fixed& rhs);
bool operator<=(const Fixed& lhs, const Fixed& rhs);
bool operator>(const Fixed& lhs, const Fixed& rhs);
bool operator>=(const Fixed& lhs, const Fixed& rhs);
bool operator==(const Fixed& lhs, const Fixed& rhs);
bool operator!=(const Fixed& lhs, const Fixed& rhs);

Fixed& operator++(Fixed& fixed);
Fixed& operator--(Fixed& fixed);

Fixed operator++(Fixed& fixed, int);
Fixed operator--(Fixed& fixed, int);

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);