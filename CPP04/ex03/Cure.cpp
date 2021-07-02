#include "Cure.hpp"

Cure::Cure():
    AMateria("cure")
{};

Cure::Cure(const Cure &copy):
    AMateria(copy)
{};

Cure & Cure::operator=(Cure &object)
{
	if (this == &object)
		return (*this);
	*this = object;
	return (*this);
};

Cure::~Cure(){};

AMateria * Cure::clone() const
{
	AMateria *aMateria = new Cure;
	return (aMateria);
};

void Cure::use(ICharacter &target)
{
	AMateria::use(target);
	std::cout << "* heals " << target.getName() << " wounds *" << std::endl;
};
