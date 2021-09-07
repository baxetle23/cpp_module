#pragma once
#include <iostream>

class Fixed {
private:
	int value;
	static const int bits = 8;
public:
	Fixed();
	Fixed(Fixed& other);
	Fixed& operator=(Fixed& other);
	int getRawBits(void) const;
	void setRawBits(const int raw);
	~Fixed();
};