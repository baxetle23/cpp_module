#pragma once
#include <string>
#include <iostream>

enum filter {
	DEBUG,
	INFO,
	WARNING,
	ERROR
};

class Karen {
private:
	void debug(void);
	void info(void);
	void warning(void);
	void error(void);
	void (Karen::*ptr[4])(void);
public:
	Karen();
	void complain(const std::string& level);
};