#include "Zombie.hpp"
#include <string>

int main() {
	Zombie *Horde = zombieHorde(10, "zombie");
	delete [] Horde;
}