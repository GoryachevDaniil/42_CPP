#ifndef EASYFIND_H
# define EASYFIND_H
# include <iostream>
# include <sstream>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <ctime>
# include <memory>
# include <fstream>
# include <cmath>
# include <exception>
# include <stdint.h>
# include <vector>
# include <iomanip>
# include <cassert>
# define	COLOR_RED     "\x1b[31m"
# define	COLOR_GREEN   "\x1b[32m"
# define	COLOR_YELLOW  "\x1b[33m"
# define	COLOR_BLUE    "\x1b[34m"
# define	COLOR_MAGENTA "\x1b[35m"
# define	COLOR_CYAN    "\x1b[36m"
# define	COLOR_RESET   "\x1b[0m"
# define	B_GRAY		"\033[1;30m"
# define	B_RED		"\033[1;31m"
# define	B_GREEN		"\033[1;32m"
# define	B_YELLOW	"\033[1;33m"
# define	B_BLUE		"\033[1;34m"
# define	B_PURPLE	"\033[1;35m"
# define	B_CYAN		"\033[1;36m"
# define	B_WHITE		"\033[1;37m"

template<typename T>
typename T::iterator easyfind(T& array, int elem)
{
	typename T::iterator iter;
	iter = find(array.begin(), array.end(), elem);
	if (iter == array.end())
		throw std::runtime_error("Not found.");
	return (iter);
}

#endif
