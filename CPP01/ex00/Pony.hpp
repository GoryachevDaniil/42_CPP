#ifndef PONY_HPP
# define PONY_HPP
# include <iostream>
# include <string>
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"

class Pony
{
	private:
		std::string	c_name;
	public:
		Pony();
		Pony(std::string name);
		~Pony();
		std::string getName();
		void 		setName(std::string name);
		void 		showPony();
};




#endif
