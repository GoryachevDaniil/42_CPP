#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
	ranged_attack_damage_(40), death_(0)
{
	std::cout << COLOR_GREEN "А вот и Пахан" COLOR_RESET << std::endl;
};

ClapTrap::ClapTrap(std::string name):
	ranged_attack_damage_(40)
{
	name_ = name;
	std::cout << COLOR_GREEN "А вот и Пахан" COLOR_RESET << std::endl;
};

ClapTrap::~ClapTrap()
{
	std::cout << COLOR_RED "Пахан пошел на боковую" COLOR_RESET << std::endl;
};


//--------------------Battle------------------//
void    ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " пояснил "
        << COLOR_MAGENTA << target << COLOR_YELLOW << " на петуха нанеся " << ranged_attack_damage_
        << " очков значительных повреждений и репутации!" << "\n" << "Противнику больше нет смысла жить!" << COLOR_RESET << std::endl;
};

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (death_ == 1)
		return ;
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " получил в табло от противника на 30 очков повреждений!"
	COLOR_RESET << std::endl;
	if (getHitpoint() - amount + armor_damage_reduction_ < 0)
		setHitpoint(0);
	else
		setHitpoint(hit_points_ - 30  + armor_damage_reduction_);
	if (getHitpoint() <= 0)
	{
		std::cout << COLOR_RED "Дал дал ушел" << std::endl;
		death_ = 1;
	}
};

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " приложил к жопе подорожник!" << COLOR_RESET << std::endl;
	if (getHitpoint() + amount > 100)
		setHitpoint(100);
	else
		setHitpoint(20);
};

//---------------------Set-------------------//
void	ClapTrap::setHitpoint(int hit_points)
{
	this->hit_points_ = hit_points;
};

void	ClapTrap::setEnergypoint(int energy_points)
{
	this->energy_points_ = energy_points;
};

void	ClapTrap::setLevel(int level)
{
	this->level_ = level;
};

void	ClapTrap::setDeath(int death)
{
	this->death_ = death;
};

//---------------------Get-------------------//
int		ClapTrap::getHitpoint(void)
{
	return (this->hit_points_);
};

int		ClapTrap::getEnergypoint(void)
{
	return (this->energy_points_);
};

int		ClapTrap::getLevel(void)
{
	return (this->level_);
};

int		ClapTrap::getDeath(void)
{
	return (this->death_);
};
