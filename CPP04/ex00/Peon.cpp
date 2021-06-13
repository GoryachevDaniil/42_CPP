#include "Peon.hpp"

Peon::Peon(std::string name):
	Victim(name)
{
	name_ = name;
	std::cout << COLOR_GREEN "Zog zog." COLOR_RESET << std::endl;
}

Peon::~Peon()
{
	std::cout << COLOR_RED "Bleuark..." COLOR_RESET << std::endl;
}

Peon::Peon(const Peon &peon)
{
	name_ = peon.name_;
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

Peon& Peon::operator= (const Peon &peon)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &peon)
        return *this;
	name_ = peon.name_;
    return (*this);
}

std::string	Peon::toIntroduce(void) const
{
	std::string rezalt = name_;
	return (rezalt);
}

std::ostream& operator<<(std::ostream& out, const Peon &peon)
{
	std:: string name = peon.toIntroduce();
	out << "I'm " << name << " and I like otters!" << std::endl;
	return (out);
};

void Peon::getPolymorphed() const
{
	std::cout << name_ << " has been turned into a pink pony!" << std::endl;
};
