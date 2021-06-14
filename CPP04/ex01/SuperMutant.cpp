#include "SuperMutant.hpp"

SuperMutant::SuperMutant()
{
	std::cout << COLOR_GREEN << "Constructor called" << COLOR_RESET << std::endl;
}

SuperMutant::SuperMutant(int hp, std::string const & type):
	Enemy(hp, type)
{
	hp_ = 170;
	type_ = "Super Mutant";
	std::cout << COLOR_GREEN << "Gaaah. Me want smash heads!" << COLOR_RESET << std::endl;
};

SuperMutant::SuperMutant(const SuperMutant &copy)
{
	hp_ = copy.hp_;
	type_ = copy.type_;
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

SuperMutant::~SuperMutant()
{
	std::cout << COLOR_RED << "Aaargh..." << COLOR_RESET << std::endl;
}

SuperMutant& SuperMutant::operator=(const SuperMutant &object)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &object)
        return *this;
	hp_ = object.hp_;
	type_ = object.type_;
    return (*this);
};

void SuperMutant::takeDamage(int damage)
{
	if (damage > 0)
		hp_ -= damage;
	// Overloads takeDamage to take 3 less damage points than normal (Yeah, they’re kinda strong, these guys.)
}
