#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde()
{
};

ZombieHorde::ZombieHorde(int N)
{
	std::cout << COLOR_BLUE "Horde generating.." COLOR_RESET << std::endl;
	std::string name[5] = {"Sion", "Blitzcrank", "Urgot", "Aurleon", "Renekton"};
	for(int i = 0; i < N; i++){
		horde[i] = newZombie(name[rand() % 5]);
	}
	for(int i = 0; i < N; i++){
		horde[i]->announce(horde[i]);
	}
	for(int i = 0; i < N; i++){
		delete (horde[i]);
	}

};

ZombieHorde::~ZombieHorde()
{
	std::cout << COLOR_BLUE "Horde Destroyed!" COLOR_RESET << std::endl;
};

void	ZombieHorde::setZombieType(std::string type, Zombie *zombie)
{
	zombie->setType(type);
};

void	ZombieHorde::randomChump(std::string name, Zombie *zombie)
{
	zombie->setName(name);
};

Zombie*	ZombieHorde::newZombie(std::string name)
{
	Zombie* zombieAlpha = new Zombie;

	zombieAlpha->setName(name);
	std::string type[5] = {"Tank", "Support", "Carry", "Mage", "Jungle"};
	zombieAlpha->setType(type[rand() % 5]);
	return (zombieAlpha);
};
