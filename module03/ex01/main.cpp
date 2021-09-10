#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
	{
	ClapTrap test("Bibo");
	test.attack("Bobo");
	test.takeDamage(3);
	test.beRepaired(2);
	test.takeDamage(10);
	}
	std::cout << std::endl << std::endl;
	{
	ScavTrap test("Bibo");
	test.attack("Bobo");
	test.takeDamage(3);
	test.beRepaired(2);
	test.takeDamage(10);
	}
}
