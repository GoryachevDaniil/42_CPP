#include "Human.hpp"

int main() {
	Human	bob;
	Brain	br;
	std::cout << bob.identify() << std::endl;
	std::cout << bob.getBrain().identify() << std::endl;
	return (0);
}
