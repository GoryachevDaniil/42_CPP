#include "FragTrap.hpp"

//----------------Constructors--------------//
FragTrap::FragTrap()
{
	std::cout << COLOR_GREEN << "Уличный МИКС ФАЙТ стартует!" << COLOR_RESET << std::endl;
};

FragTrap::FragTrap(std::string name):
	hit_points_(0), max_hit_points_(100), energy_points_(0),
	max_energy_points_(100), level_(1), melee_attack_damage_(30),
	ranged_attack_damage_(20),magic_attack_damage_(25),
	chacnoris_attack_damage_(20), blowjob_attack_damage_(10),
	armor_damage_reduction_(5)
{
	energy_points_ = max_energy_points_;
	hit_points_ = max_hit_points_;
	name_ = name;
	std::cout << COLOR_GREEN << "Уличный МИКС ФАЙТ стартует!" << COLOR_RESET << std::endl;
}


//------------------Destructor----------------//
FragTrap::~FragTrap()
{
	std::cout << COLOR_RED << "Уличный МИКС ФАЙТ окончен!" << COLOR_RESET << std::endl;
}

//--------------------Battle------------------//

void	FragTrap::vaulthunter_dot_exe(std::string const & target)
{
	attacks[0] = &FragTrap::rangedAttack;
	attacks[1] = &FragTrap::meleeAttack;
	attacks[3] = &FragTrap::magicAttack;
	attacks[2] = &FragTrap::blowjobAttack;
	attacks[4] = &FragTrap::chacnorisAttack;
	if (getEnergypoint() - 25 < 0)
		std::cout << COLOR_BLUE "Нужно больше энергии" << std::endl;
	else
	{
		(this->*attacks[rand() % 5])(target);
		setEnergypoint(getEnergypoint() - 25);
	}
};

void	FragTrap::rangedAttack(std::string const & target)
{
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " натягивает тетеву и попадает стрелой "
		<< COLOR_MAGENTA << target << COLOR_YELLOW << " прямо в зад нанеся " << ranged_attack_damage_
		<< " очков значительных повреждений!" << "\n" << "Вот это выстрел! Очко противника порвано на части!" << COLOR_RESET << std::endl;
};

void	FragTrap::meleeAttack(std::string const & target)
{
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " вознеся над головой огроменный дилдо наносит удар " << COLOR_MAGENTA << target
		<< COLOR_YELLOW << " прямо в лоб нанеся " << melee_attack_damage_
		<< " очков значительных повреждений!" << "\n" << "Вот это удар! У противника отвалиливаются уши! Дилдо вибрирует от счастья!" << COLOR_RESET << std::endl;
};

void	FragTrap::magicAttack(std::string const & target)
{
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " собирает все сопли во рту плюет зеленцом " << COLOR_MAGENTA << target
		<< COLOR_YELLOW << " в рожу нанеся " << magic_attack_damage_
		<< " очков значительных повреждений!" << "\n" << "Вот это фашмак! Противник опущен! Пацаны на районе больше с ним не здороваются за руку!" << COLOR_RESET << std::endl;
};

void	FragTrap::blowjobAttack(std::string const & target)
{
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " атакует " << COLOR_MAGENTA << target
		<< COLOR_YELLOW << " ниже пояса нанеся " << blowjob_attack_damage_
		<< " очков значительных повреждений!" << "\n" << "Противник в замешательсве! Пацаны на районе больше с ним не здороваются за руку!" << COLOR_RESET << std::endl;
};

void	FragTrap::chacnorisAttack(std::string const & target)
{
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " ушатывает " << COLOR_MAGENTA << target
		<< COLOR_YELLOW << " с вертухана а ля Чак Норис нанеся " << chacnoris_attack_damage_
		<< " очков значительных повреждений!" << "\n" << "Вот это вертухан! Противник в нокауте! Как после встречи с Чаком Норисом!" << COLOR_RESET << std::endl;
};

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " получил в табло от противника на 30 очков повреждений!"
	COLOR_RESET << std::endl;
	if (getHitpoint() - amount + armor_damage_reduction_ < 0)
		setHitpoint(0);
	else
		setHitpoint(hit_points_ - 30  + armor_damage_reduction_);
};

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " приложил к жопе подорожник!" << COLOR_RESET << std::endl;
	if (getHitpoint() + amount > 100)
		setHitpoint(100);
	else
		setHitpoint(20);
};


//---------------------Set-------------------//
void	FragTrap::setHitpoint(int hit_points)
{
	this->hit_points_ = hit_points;
};

void	FragTrap::setEnergypoint(int energy_points)
{
	this->energy_points_ = energy_points;
};

void	FragTrap::setLevel(int level)
{
	this->level_ = level;
};

//---------------------Get-------------------//
int		FragTrap::getHitpoint(void)
{
	return (this->hit_points_);
};

int		FragTrap::getEnergypoint(void)
{
	return (this->energy_points_);
};

int		FragTrap::getLevel(void)
{
	return (this->level_);
};
