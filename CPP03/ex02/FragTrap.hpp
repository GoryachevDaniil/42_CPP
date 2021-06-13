#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"


class FragTrap : public ClapTrap
{
public:
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	magicAttack(std::string const & target);
	void	blowjobAttack(std::string const & target);
	void	chacnorisAttack(std::string const & target);
	void	vaulthunter_dot_exe(std::string const & target);
	typedef void	(FragTrap::*t_attack)(std::string const &);
	t_attack	attacks[5];
};

#endif
