#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP
# include "ClapTrap.hpp"
# include "NinjaTrap.hpp"
# include "FragTrap.hpp"

class SuperTrap : public NinjaTrap, public FragTrap
{
public:
	SuperTrap();
	SuperTrap(std::string name);
	~SuperTrap();
	void	battle(std::string const & target);
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	magicAttack(std::string const & target);
	void	blowjobAttack(std::string const & target);
	void	djanklodvandamAttack(std::string const & target);
	typedef void	(SuperTrap::*t_attack)(std::string const &);
	t_attack	attacks[5];
};

#endif
