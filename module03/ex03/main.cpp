#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

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
	test.guardGate();
	}
	std::cout << std::endl << std::endl;
	{
	FragTrap test("Bibo");
	test.attack("Bobo");
	test.takeDamage(3);
	test.beRepaired(2);
	test.takeDamage(10);
	test.highFivesGuys();
	}
	std::cout << std::endl << std::endl;
	{
	DiamondTrap test("Bibo");
	test.whoAmI();
	std::cout << test.getAtackDamage() << " attack points" << std::endl
		<< test.getEnergyPoints() << " energy points" << std::endl
		<< test.getHitPoints() << " hit points" << std::endl;
	test.attack("Bobo");
	test.takeDamage(3);
	test.beRepaired(2);
	test.takeDamage(10);
	std::cout << "special function\n";
	test.guardGate();
	test.highFivesGuys();
	}
}
