#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP
#include "Zombie.hpp"

class ZombieEvent
{
private:

public:
	ZombieEvent();
	~ZombieEvent();
	void	setZombieType(std::string type, Zombie *zombiezzi);
	void	randomChump(std::string name, Zombie *zombiezzi);
	Zombie*	newZombie(std::string name);
};


#endif
