#include "Victim.hpp"

Victim::Victim()
{
};

Victim::Victim(std::string name):
	name_(name)
{
	std::cout << COLOR_GREEN "Some random victim called " << name_ << " just appeared!" COLOR_RESET << std::endl;
}

Victim::~Victim()
{
	std::cout << COLOR_RED "Victim " << name_ <<  " just died for no apparent reason!" COLOR_RESET << std::endl;
}

Victim::Victim(const Victim &victim)
	: name_(victim.name_)
{
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

Victim& Victim::operator= (const Victim &victim)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &victim)
        return *this;
	name_ = victim.name_;
    return (*this);
}

std::string	Victim::toIntroduce(void) const
{
	std::string rezalt = name_;
	return (rezalt);
}

std::ostream& operator<<(std::ostream& out, const Victim &victim)
{
	std:: string name = victim.toIntroduce();
	out << "I'm " << name << " and I like otters!" << std::endl;
	return (out);
};

std::string Victim::getName()
{
	return (this->name_);
};

void		Victim::setName(std::string name)
{
	this->name_ = name;
};

void Victim::getPolymorphed() const
{
	std::cout << name_ << " has been turned into a cute little sheep!" << std::endl;
};
