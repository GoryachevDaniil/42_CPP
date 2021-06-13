#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>
# include <sstream>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <ctime>
# include <memory>
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"


class Weapon
{
private:
	std::string m_weapon;
public:
	Weapon();
	Weapon(std::string weapon);
	~Weapon();
	const std::string	&getType();
	void				setType(const std::string &weapon);
};




#endif
