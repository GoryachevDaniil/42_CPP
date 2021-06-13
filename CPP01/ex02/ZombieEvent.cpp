#include "ZombieEvent.hpp"

ZombieEvent::ZombieEvent()
{
};

ZombieEvent::~ZombieEvent()
{
};

void	ZombieEvent::setZombieType(std::string type, Zombie *zombiezzi)
{
	zombiezzi->setType(type);
};

void	ZombieEvent::randomChump(std::string name, Zombie *zombiezzi)
{
	zombiezzi->setName(name);
	zombiezzi->announce(zombiezzi);
};

Zombie*	ZombieEvent::newZombie(std::string name)
{
	Zombie* zombieAlpha = new Zombie;

	zombieAlpha->setName(name);
	zombieAlpha->setType("Alpha");
	return (zombieAlpha);
}
