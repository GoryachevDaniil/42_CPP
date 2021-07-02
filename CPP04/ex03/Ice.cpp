#include "Ice.hpp"

Ice::Ice():
    AMateria("ice")
{};

Ice::Ice(Ice &copy):
    AMateria(copy)
{};

Ice & Ice::operator=(Ice &object)
{
	if (this == &object)
		return (*this);
	*this = object;
	return (*this);
};

Ice::~Ice(){};

AMateria * Ice::clone() const
{
	AMateria *aMateria = new Ice;
	return (aMateria);
};

void Ice::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* shoots an ice bolt at " <<target.getName() << " *" <<std::endl;
};
