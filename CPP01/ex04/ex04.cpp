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

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::cout << COLOR_RED "String: "<< COLOR_GREEN << string << COLOR_RESET << std::endl;

	std::string	*pointer = &string;
	std::cout << COLOR_RED "Pointer(*): " << COLOR_YELLOW << pointer << COLOR_RESET " of " << COLOR_GREEN << *pointer << COLOR_RESET << std::endl;

	std::string &reference = string;
	std::cout << COLOR_RED "Reference(&): " << COLOR_YELLOW << &reference << COLOR_RESET " of " << COLOR_GREEN "" << reference << COLOR_RESET << std::endl;

	return (0);
}
