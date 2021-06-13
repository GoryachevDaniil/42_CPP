#include "NinjaTrap.hpp"

//----------------Constructors--------------//
NinjaTrap::NinjaTrap()
{
    std::cout << COLOR_GREEN << "Чуешь запах конг-фу?" << COLOR_RESET << std::endl;
};

NinjaTrap::NinjaTrap(std::string name)
{
    name_ = name;
    hit_points_ = 100;
    max_hit_points_ = 100;
    energy_points_ = 50;
    max_energy_points_ = 50;
    level_ = 1;
    melee_attack_damage_ = 20;
    ranged_attack_damage_ = 15;
    armor_damage_reduction_ = 3;
    magic_attack_damage_ = 25;
    djanklodvandam_attack_damage_ = 20;
    blowjob_attack_damage_ = 10;
    std::cout << COLOR_GREEN << "Чуешь запах конг-фу?" << COLOR_RESET << std::endl;
};

NinjaTrap::~NinjaTrap()
{
    std::cout << COLOR_RED << "Чую запах твоих носков" << COLOR_RESET << std::endl;
};


//--------------------Battle------------------//

void    NinjaTrap::ninjaShoebox(FragTrap &trap)
{
	trap.vaulthunter_dot_exe("Чебуратор");
};

void    NinjaTrap::ninjaShoebox(ClapTrap &trap)
{
	trap.rangedAttack("Косячника");
};

void    NinjaTrap::ninjaShoebox(ScavTrap &trap)
{
	trap.challengeNewcomer("ПятнЫЖко");
};

void    NinjaTrap::ninjaShoebox(NinjaTrap &trap)
{
	trap.ninjaShoe("Дракона");
};

void    NinjaTrap::ninjaShoe(std::string const & target)
{
    if (death_ == 1)
        return ;
    attacks[0] = &NinjaTrap::rangedAttack;
    attacks[1] = &NinjaTrap::meleeAttack;
    attacks[3] = &NinjaTrap::magicAttack;
    attacks[2] = &NinjaTrap::blowjobAttack;
    attacks[4] = &NinjaTrap::djanklodvandamAttack;
    if (getEnergypoint() - 25 < 0)
        std::cout << COLOR_BLUE "Нужно больше энергии" << std::endl;
    else
    {
        (this->*attacks[rand() % 5])(target);
        setEnergypoint(getEnergypoint() - 25);
    }
};

void    NinjaTrap::rangedAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " закидывает пельмешками "
        << COLOR_MAGENTA << target << COLOR_YELLOW << " нанеся " << ranged_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Теперь противник сыт по горло!" << COLOR_RESET << std::endl;
};

void    NinjaTrap::meleeAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " замахивается но падает от чего случается неболшое землятресение которое задевает " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << melee_attack_damage_
        << " очков значительных повреждений!" << "\n" << "РЖУНИМАГУ" << COLOR_RESET << std::endl;
};

void    NinjaTrap::magicAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " делает вид что что-то делает " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << melee_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Противник в непонятках че он вообще сюда пришел!" << COLOR_RESET << std::endl;
}
void    NinjaTrap::blowjobAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " фигачит по яйкам " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << blowjob_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Какая боль... Какая боль.. " << COLOR_RESET << std::endl;
};

void    NinjaTrap::djanklodvandamAttack(std::string const & target)
{
    std::cout << COLOR_CYAN << "FR4G-TP " COLOR_MAGENTA << name_ << COLOR_YELLOW " ушатывает с помощью своего мизинчика " << COLOR_MAGENTA << target
        << COLOR_YELLOW << " нанеся " << djanklodvandam_attack_damage_
        << " очков значительных повреждений!" << "\n" << "Вот это мизинчик! Противник в нокауте! Джан Клод Вандам нервно курит в сторонке!" << COLOR_RESET << std::endl;
};
