#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
	Enemy()
{
	hp_ = 80;
	type_ = "RadScorpion";
	std::cout << COLOR_GREEN << "* click click click *" << COLOR_RESET << std::endl;
}

RadScorpion::RadScorpion(int hp, std::string const & type):
	Enemy(hp, type)
{
	hp_ = 80;
	type_ = "RadScorpion";
	std::cout << COLOR_GREEN << "* click click click *" << COLOR_RESET << std::endl;
};

RadScorpion::RadScorpion(const RadScorpion &copy)
{
	hp_ = copy.hp_;
	type_ = copy.type_;
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

RadScorpion::~RadScorpion()
{
	std::cout << COLOR_RED << "* SPROTCH *" << COLOR_RESET << std::endl;
}

RadScorpion& RadScorpion::operator=(const RadScorpion &object)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &object)
        return *this;
	hp_ = object.hp_;
	type_ = object.type_;
    return (*this);
};

void RadScorpion::takeDamage(int damage)
{
	// Overloads takeDamage to take 3 less damage points than normal (Yeah, they’re kinda strong, these guys.)
}
