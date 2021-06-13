#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : virtual public ClapTrap
{
private:
	int djanklodvandam_attack_damage_;
	NinjaTrap();
public:
	NinjaTrap(std::string name);
	~NinjaTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	magicAttack(std::string const & target);
	void	blowjobAttack(std::string const & target);
	void	djanklodvandamAttack(std::string const & target);
	void	ninjaShoe(std::string const & target);
	void    ninjaShoebox(FragTrap &trap);
	void    ninjaShoebox(ClapTrap &trap);
	void    ninjaShoebox(ScavTrap &trap);
	void    ninjaShoebox(NinjaTrap &trap);
	typedef void	(NinjaTrap::*t_attack)(std::string const &);
	t_attack	attacks[5];
};

#endif
