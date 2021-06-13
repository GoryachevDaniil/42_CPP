# include "ZombieEvent.hpp"

int main() {
	ZombieEvent zombieEvent;
	Zombie* zombieAlpha;

	std::string type[5] = {"Tank", "Support", "Carry", "Mage", "Jungle"};
	std::string name[5] = {"Sion", "Blitzcrank", "Urgot", "Aurleon", "Renekton"};

	for(int i = 0; i < 5; i++){
		sleep(1);
		Zombie *zombiezzi = new Zombie();
		zombieEvent.setZombieType(type[rand() % 5], zombiezzi);
		zombieEvent.randomChump(name[rand() % 5], zombiezzi);
		delete (zombiezzi);
	}

	zombieAlpha = zombieEvent.newZombie("Garret");
	zombieAlpha->announce(zombieAlpha);
	delete (zombieAlpha);

	return (0);
}
