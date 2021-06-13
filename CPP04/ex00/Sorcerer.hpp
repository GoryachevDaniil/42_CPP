#ifndef SORCERER_HPP
# define SORCERER_HPP
# include <iostream>
# include <sstream>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <ctime>
# include <memory>
# include <fstream>
# include <cmath>
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"
# include "Victim.hpp"

class Sorcerer
{
private:
	std::string	name_;
	std::string	title_;
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(const Sorcerer &sorcerer);
	Sorcerer& operator=(const Sorcerer &sorcerer);
	~Sorcerer();
	std::string	toIntroduce(void) const;
	std::string getName();
	std::string getTitle();
	void		setName(std::string name);
	void		setTitle(std::string title);
	void		polymorph(Victim const &target) const;
};

std::ostream& operator<<(std::ostream& out, const Sorcerer &sorcerer);

#endif
