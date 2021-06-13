#include "Weapon.hpp"

Weapon::Weapon()
{
};

Weapon::Weapon(std::string weapon)
{
	m_weapon = weapon;
};

Weapon::~Weapon()
{

}

const std::string	&Weapon::getType()
{
	return (this->m_weapon);
};

void		Weapon::setType(const std::string &weapon)
{
	this->m_weapon = weapon;
};
