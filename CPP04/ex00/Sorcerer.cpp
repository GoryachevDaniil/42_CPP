#include "Sorcerer.hpp"

Sorcerer::Sorcerer(std::string name, std::string title):
	name_(name), title_(title)
{
	std::cout << COLOR_GREEN << name_ << " " << title_ << " is born!" COLOR_RESET << std::endl;
}

Sorcerer::~Sorcerer()
{
	std::cout << COLOR_RED << name_ << " " << title_ << " is dead. Consequences will never be the same!" << std::endl;
}

Sorcerer::Sorcerer(const Sorcerer &sorcerer)
	: name_(sorcerer.name_), title_(sorcerer.title_)
{
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

Sorcerer& Sorcerer::operator= (const Sorcerer &sorcerer)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &sorcerer)
        return *this;
	name_ = sorcerer.name_;
	title_ = sorcerer.title_;
    return (*this);
}

std::string	Sorcerer::toIntroduce(void) const
{
	std::string rezalt = name_ + " " + title_;
	return (rezalt);
}

std::ostream& operator<<(std::ostream& out, const Sorcerer &sorcerer)
{
	std:: string name = sorcerer.toIntroduce();

	out << "I am " << name << " and I like ponies!" << std::endl;
	return (out);
};

std::string Sorcerer::getName()
{
	return (this->name_);
};

std::string Sorcerer::getTitle()
{
	return (this->title_);
};

void		Sorcerer::setName(std::string name)
{
	this->name_ = name;
};

void		Sorcerer::setTitle(std::string title)
{
	this->title_ = title;
};

void		Sorcerer::polymorph(const Victim &target) const
{
	target.getPolymorphed();
};
