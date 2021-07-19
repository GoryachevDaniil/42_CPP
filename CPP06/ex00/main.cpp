#include "Cast.hpp"

int	handle_error(std::string str)
{
	std::cout << str << std::endl;
	return (0);
}

int main(int ac, char **av)
{
	if (ac != 2)
		return (handle_error("Invalid number of arguments."));
	Cast *caster = new Cast();
	caster->printResault(av[1]);
	return (0);
}
