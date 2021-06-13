#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP
#include "Zombie.hpp"

class ZombieHorde
{
private:
	Zombie		**horde;
public:
	ZombieHorde();
	ZombieHorde(int N);
	~ZombieHorde();
	void	setZombieType(std::string type, Zombie *zombie);
	void	randomChump(std::string name, Zombie *zombie);
	Zombie*	newZombie(std::string name);

};


#endif
