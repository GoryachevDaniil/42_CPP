#include "Pony.hpp"

void ponyOnTheHeap()
{
	Pony *horse = new Pony("Goracio");
	horse->showPony();
	delete(horse);
}

void ponyOnTheStack()
{
	Pony horse = Pony("Goracio");
	horse.showPony();
}

int main()
{
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	std::cout << COLOR_GREEN "Where is a cheap 🐴 Pony??" COLOR_RESET << std::endl;
	ponyOnTheHeap();
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	std::cout << COLOR_GREEN "Where is a stack 🐴 Pony??" COLOR_RESET << std::endl;
	ponyOnTheStack();
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	std::cout << COLOR_CYAN "<-------------------------------------------------------------------------------------------------------->" COLOR_RESET << std::endl;
	return (0);
}

