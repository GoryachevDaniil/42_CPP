#include "FragTrap.hpp"

//----------------Constructors--------------//
FragTrap::FragTrap()
{
	std::cout << COLOR_GREEN << "Уличный МИКС ФАЙТ стартует!" << COLOR_RESET << std::endl;
};

FragTrap::FragTrap(std::string name)
{
	name_ = name;
	hit_points_ = 100;
	max_hit_points_ = 100;
	energy_points_ = 100;
	max_energy_points_ = 100;
	level_ = 1;
	melee_attack_damage_ = 30;
	ranged_attack_damage_ = 20;
	armor_damage_reduction_ = 5;
	magic_attack_damage_ = 25;
	chacnoris_attack_damage_ = 20;
	blowjob_attack_damage_ = 10;
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
	if (death_ == 1)
        return ;
	attacks[0] = &FragTrap::rangedAttack;
	attacks[1] = &FragTrap::meleeAttack;
	attacks[3] = &FragTrap::magicAttack;
	attacks[2] = &FragTrap::blowjobAttack;
	attacks[4] = &FragTrap::chacnorisAttack;
	if (getEnergypoint() - 25 < 0)
		std::cout << COLOR_BLUE "Нужно больше энергии" COLOR_RESET << std::endl;
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
