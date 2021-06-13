#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	magicAttack(std::string const & target);
	void	blowjobAttack(std::string const & target);
	void	djakichanAttack(std::string const & target);
	void	challengeNewcomer(std::string const & target);
	typedef void	(ScavTrap::*t_attack)(std::string const &);
	t_attack	attacks[5];
};

#endif
