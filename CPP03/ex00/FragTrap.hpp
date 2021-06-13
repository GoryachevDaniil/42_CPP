#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iostream>
# include <sstream>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <ctime>
# include <memory>
# include <fstream>
# include <cmath>
# define COLOR_RED     "\x1b[31m"
# define COLOR_GREEN   "\x1b[32m"
# define COLOR_YELLOW  "\x1b[33m"
# define COLOR_BLUE    "\x1b[34m"
# define COLOR_MAGENTA "\x1b[35m"
# define COLOR_CYAN    "\x1b[36m"
# define COLOR_RESET   "\x1b[0m"


class FragTrap
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
	FragTrap();
	FragTrap(std::string name);
	~FragTrap();
	void	rangedAttack(std::string const & target);
	void	meleeAttack(std::string const & target);
	void	magicAttack(std::string const & target);
	void	blowjobAttack(std::string const & target);
	void	chacnorisAttack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	vaulthunter_dot_exe(std::string const & target);
	void	setHitpoint(int hit_points);
	void	setEnergypoint(int energy_points);
	void	setLevel(int level);
	int		getHitpoint(void);
	int		getEnergypoint(void);
	int		getLevel(void);
	typedef void	(FragTrap::*t_attack)(std::string const &);
	t_attack	attacks[5];
};

#endif
