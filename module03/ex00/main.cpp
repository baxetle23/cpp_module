#include "ClapTrap.hpp"

int main() {
	ClapTrap test("Bibo");
	test.attack("Bobo");
	test.takeDamage(3);
	test.beRepaired(2);
	test.takeDamage(10);
}
