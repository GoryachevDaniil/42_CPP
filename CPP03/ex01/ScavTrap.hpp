#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "FragTrap.hpp"

class ScavTrap
{
private:
	int 		hit_points_;
	int 		max_hit_points_;
	int 		energy_points_;
	int 		max_energy_points_;
	int 		level_;
	std::string name_;
	int 		melee_attack_damage_;
	int 		ranged_attack_damage_;
	int			magic_attack_damage_;
	int			chacnoris_attack_damage_;
	int			blowjob_attack_damage_;
	int 		armor_damage_reduction_;
public:
	ScavTrap();
	ScavTrap(std::string name);
	~ScavTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	magicAttack(std::string const & target);
	void	blowjobAttack(std::string const & target);
	void	djakichanAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	challengeNewcomer(std::string const & target);
	void	setHitpoint(int hit_points);
	void	setEnergypoint(int energy_points);
	void	setLevel(int level);
	int		getHitpoint(void);
	int		getEnergypoint(void);
	int		getLevel(void);
	typedef void	(ScavTrap::*t_attack)(std::string const &);
	t_attack	attacks[5];
};

#endif
