#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	m_name;
	Weapon 		&m_weapon;
public:
	HumanA();
	HumanA(const std::string name, Weapon &weapon);
	~HumanA();
	void	attack();
};

#endif
