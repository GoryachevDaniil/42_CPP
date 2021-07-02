#include "AMateria.hpp"

AMateria::AMateria(const std::string &type):
	type_(type), xp_(0)
{};

AMateria::AMateria(const AMateria &copy):
	type_(copy.type_), xp_(copy.xp_)
{};

AMateria & AMateria::operator=(const AMateria &object)
{
	if (this == &object)
		return (*this);
	*this = object;
	return (*this);
}

AMateria::~AMateria(){};

const std::string & AMateria::getType() const{return (type_);}

unsigned int AMateria::getXp() const{return xp_;}

void AMateria::use(ICharacter &target){xp_ += 10;}
