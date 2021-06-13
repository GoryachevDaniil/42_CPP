#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iostream>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <ctime>
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class Zombie
{
private:
	std::string	c_name;
	std::string	c_type;
public:
	Zombie();
	Zombie(std::string name, std::string type);
	~Zombie();
	void		announce(Zombie *zombiezzzi);
	std::string getName();
	std::string getType();
	void 		setName(std::string name);
	void 		setType(std::string type);
	void		riseFromDead();
};


#endif
