#include "Zombie.hpp"

Zombie* zombieHorde(int N, const std::string& name) {
	Zombie *Horde = new Zombie [N];
	while(N) {
		Horde[N - 1].SetName(name + " №" + std::to_string(N));
		Horde[N - 1].Anons();
		--N;
	}
	return Horde;
}