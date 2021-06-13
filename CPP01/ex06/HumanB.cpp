# include "HumanB.hpp"

HumanB::HumanB(const std::string name)
	:m_name(name)
{
	std::cout << COLOR_GREEN "Human B " << m_name << " comes!" COLOR_RESET << std::endl;
};

HumanB::~HumanB()
{
	std::cout << COLOR_RED "Human B " << m_name << " retreat!" COLOR_RESET << std::endl;
};

void	HumanB::setWeapon(Weapon &weapon)
{
	m_weapon = &weapon;
}

void	HumanB::attack()
{
	std::cout << COLOR_YELLOW << m_name << " attacks with his " << m_weapon->getType() << std::endl;
}

