# include "HumanA.hpp"

HumanA::HumanA(const std::string name, Weapon &weapon)
	: m_name(name), m_weapon(weapon)
{
	std::cout << COLOR_GREEN "Human B " << m_name << " comes!" COLOR_RESET << std::endl;
};

HumanA::~HumanA()
{
	std::cout << COLOR_RED "Human B " << m_name << " retreat!" COLOR_RESET << std::endl;
};

void	HumanA::attack()
{
	std::cout << COLOR_YELLOW << m_name << " attacks with his " << m_weapon.getType() << COLOR_RESET << std::endl;
};
