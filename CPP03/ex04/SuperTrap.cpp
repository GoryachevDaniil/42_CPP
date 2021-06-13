#include "SuperTrap.hpp"

SuperTrap::SuperTrap(std::string name):
   NinjaTrap(name),  FragTrap(name)
{
    name_ = name;
    level_ = 1;
    hit_points_ = FragTrap::getHitpoint();
    max_hit_points_ = FragTrap::getMaxHitpoint();
    energy_points_ = NinjaTrap::getEnergypoint();
    max_energy_points_ = NinjaTrap::getMaxEnergypoint();
    melee_attack_damage_= NinjaTrap::getMeleeAttackDamage();
    ranged_attack_damage_ = FragTrap::getRangedAttackDamage();
    armor_damage_reduction_ = FragTrap::getArmorDamageReduction();
};

SuperTrap::~SuperTrap()
{
};

void	SuperTrap::battle(std::string const & target)
{
	if (FragTrap::getDeath() == 1)
        return ;
	attacks[0] = &SuperTrap::rangedAttack;
	attacks[1] = &SuperTrap::meleeAttack;
	attacks[3] = &SuperTrap::magicAttack;
	attacks[2] = &SuperTrap::blowjobAttack;
	attacks[4] = &SuperTrap::djanklodvandamAttack;
	if (FragTrap::getEnergypoint() - 25 < 0)
		std::cout << COLOR_BLUE "Нужно больше энергии" COLOR_RESET << std::endl;
	else
	{
		(this->*attacks[rand() % 5])(target);
		FragTrap::setEnergypoint(FragTrap::getEnergypoint() - 25);
	}
};

void    SuperTrap::rangedAttack(std::string const & target)
{
    FragTrap::rangedAttack(target);
}

void	SuperTrap::meleeAttack(std::string const & target)
{
    NinjaTrap::meleeAttack(target);
};

void	SuperTrap::magicAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " пускает огненный шар в" << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << melee_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Противник в пепел!" << COLOR_RESET << std::endl;
};

void	SuperTrap::blowjobAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " делает подсечку " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << melee_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Противник лицом в пол!" << COLOR_RESET << std::endl;
};

void	SuperTrap::djanklodvandamAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " дал в челюсть " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << melee_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Противник в ауте!" << COLOR_RESET << std::endl;
};
