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
	int toInt(void) const;

	~Fixed();
};

std::ostream& operator<<(std::ostream& out, const Fixed& fixed);