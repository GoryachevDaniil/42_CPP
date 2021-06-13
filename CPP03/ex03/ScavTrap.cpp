#include "ScavTrap.hpp"

//----------------Constructors--------------//
ScavTrap::ScavTrap()
{
    std::cout << COLOR_GREEN << "За район стою горой!" << COLOR_RESET << std::endl;
};

ScavTrap::ScavTrap(std::string name)
{
    hit_points_ = 100;
    max_hit_points_ = 100;
    energy_points_ = 50;
    max_energy_points_ = 50;
    level_ = 1;
    melee_attack_damage_ = 20;
    ranged_attack_damage_ = 15;
    armor_damage_reduction_ = 3;
    magic_attack_damage_ = 25;
    chacnoris_attack_damage_ = 20;
    blowjob_attack_damage_ = 10;
    name_ = name;
    std::cout << COLOR_GREEN << "За район стою горой!" << COLOR_RESET << std::endl;
}


//------------------Destructor----------------//
ScavTrap::~ScavTrap()
{
    std::cout << COLOR_RED << "Ща вернусь никуда не уходи!" << COLOR_RESET << std::endl;
}

//--------------------Battle------------------//

void    ScavTrap::challengeNewcomer(std::string const & target)
{
    if (death_ == 1)
        return ;
    attacks[0] = &ScavTrap::rangedAttack;
    attacks[1] = &ScavTrap::meleeAttack;
    attacks[3] = &ScavTrap::magicAttack;
    attacks[2] = &ScavTrap::blowjobAttack;
    attacks[4] = &ScavTrap::djakichanAttack;
    if (getEnergypoint() - 25 < 0)
        std::cout << COLOR_BLUE "Нужно больше энергии" << std::endl;
    else
    {
        (this->*attacks[rand() % 5])(target);
        setEnergypoint(getEnergypoint() - 25);
    }
};

void    ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " щелкает семечки и плюется кожурками в "
        << COLOR_MAGENTA << target << COLOR_YELLOW << " нанеся " << ranged_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Противнику не по себе!" << COLOR_RESET << std::endl;
};

void    ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " натягивает полотенце и бьет с размаху по яйкам " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << melee_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Левое яйчко лопается и оттуда вылезает птенчик!" << COLOR_RESET << std::endl;
};

void    ScavTrap::magicAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " засыпает тайт прямо в ноздри " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << melee_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Противник ловит незабываемый приход и падает в обморок!" << COLOR_RESET << std::endl;
}
void    ScavTrap::blowjobAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " фигачит мойкой по голове " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << blowjob_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Противник невыдерживает удара и падает в лужу лицом! " << COLOR_RESET << std::endl;
};

void    ScavTrap::djakichanAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " ушатывает " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " с вертухана а ля Джеки Чан нанеся " << chacnoris_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Вот это вертухан! Противник в нокауте! Как после встречи с Джеки Чаном!" << COLOR_RESET << std::endl;
};

