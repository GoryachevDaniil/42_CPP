#include "ClapTrap.hpp"

ClapTrap::ClapTrap():
    death_(0)
{
    std::cout << COLOR_GREEN "А вот и Пахан" COLOR_RESET << std::endl;
};

ClapTrap::ClapTrap(std::string name):
    hit_points_(100), max_hit_points_(100), energy_points_(100),
	max_energy_points_(100), level_(1), name_(name),  melee_attack_damage_(30),
	ranged_attack_damage_(20),
      magic_attack_damage_(25), chacnoris_attack_damage_(20),  blowjob_attack_damage_(10), armor_damage_reduction_(5), death_(0)
{
    std::cout << COLOR_GREEN "А вот и Пахан" COLOR_RESET << std::endl;
};

ClapTrap::~ClapTrap()
{
    std::cout << COLOR_RED "Пахан пошел на боковую" COLOR_RESET << std::endl;
};


//--------------------Battle------------------//
void    ClapTrap::rangedAttack(std::string const & target)
{
    setRangedAttackDamage(40);
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " пояснил "
        << COLOR_MAGENTA << target << COLOR_YELLOW << " на петуха нанеся " << ranged_attack_damage_
        << " очков значительных повреждений и репутации!" << "\n" << "Противнику больше нет смысла жить!" << COLOR_RESET << std::endl;
};

void    ClapTrap::takeDamage(unsigned int amount)
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

void    ClapTrap::beRepaired(unsigned int amount)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " приложил к жопе подорожник!" << COLOR_RESET << std::endl;
    if (getHitpoint() + amount > 100)
        setHitpoint(100);
    else
        setHitpoint(20);
};

//---------------------Set-------------------//
void    ClapTrap::setHitpoint(int hit_points)
{
    this->hit_points_ = hit_points;
};

void    ClapTrap::setMaxHitpoint(int max_hit_points)
{
    this->max_hit_points_ = max_hit_points;
};

void    ClapTrap::setEnergypoint(int energy_points)
{
    this->energy_points_ = energy_points;
};

void    ClapTrap::setMaxEnergypoint(int max_energy_points)
{
    this->max_energy_points_ = max_energy_points;
};

void    ClapTrap::setLevel(int level)
{
    this->level_ = level;
};

void    ClapTrap::setMeleeAttackDamage(unsigned int melee_attack_damage)
{
    this->melee_attack_damage_ = melee_attack_damage;
};

void    ClapTrap::setRangedAttackDamage(unsigned int ranged_attack_damage)
{
    this->ranged_attack_damage_ = ranged_attack_damage;
}

void    ClapTrap::setArmorDamageReduction(unsigned int armor_damage_reduction)
{
    this->armor_damage_reduction_ = armor_damage_reduction;
}

void    ClapTrap::setDeath(int death)
{
    this->death_ = death;
};


//---------------------Get-------------------//
int        ClapTrap::getHitpoint(void)
{
    return (this->hit_points_);
};

int        ClapTrap::getMaxHitpoint(void)
{
    return (this->max_hit_points_);
};

int        ClapTrap::getEnergypoint(void)
{
    return (this->energy_points_);
};

int        ClapTrap::getMaxEnergypoint(void)
{
    return (this->max_energy_points_);
};

int        ClapTrap::getLevel(void)
{
    return (this->level_);
};

int        ClapTrap::getMeleeAttackDamage(void)
{
    return (this->melee_attack_damage_);
};

int        ClapTrap::getRangedAttackDamage(void)
{
    return (this->ranged_attack_damage_);
};

int        ClapTrap::getArmorDamageReduction(void)
{
    return (this->armor_damage_reduction_);
};

int        ClapTrap::getDeath(void)
{
    return (this->death_);
};

