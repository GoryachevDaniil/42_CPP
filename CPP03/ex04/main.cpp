#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
	std::cout << "FragTrap" << std::endl;

	FragTrap robot("Крокодил Гонгрена");

	robot.setEnergypoint(100);
	robot.setHitpoint(100);
	for(int i = 0; i < 5; i++)
		robot.vaulthunter_dot_exe("Чебуратор");
	robot.takeDamage(30);
	robot.beRepaired(20);

	std::cout << "\n" << "ScavTrap" << std::endl;

	ScavTrap robot_2("Мордордыр");

	robot_2.setEnergypoint(50);
	robot_2.setHitpoint(100);
	for(int i = 0; i < 3; i++)
		robot_2.challengeNewcomer("ПятнЫЖко");
	robot_2.takeDamage(30);
	robot_2.beRepaired(20);

	std::cout << "\n" << "ClapTrap" << std::endl;
	ClapTrap father("Батек");

	std::cout << "\n" << "NinjaTrap" << std::endl;
	NinjaTrap robot_3("Панда");

	robot.setHitpoint(100);
	robot.setEnergypoint(100);
	robot_2.setEnergypoint(50);
	robot_3.setEnergypoint(50);
	robot_2.setHitpoint(100);
	robot_3.setHitpoint(60);
	robot_3.ninjaShoebox(robot);
	robot_3.ninjaShoebox(robot_2);
	robot_3.ninjaShoebox(robot_3);
	robot_3.ninjaShoebox(father);

	std::cout << "\n" << "SuperTrap" << std::endl;

	SuperTrap robot_4("Чюпалено");
	for(int i = 0; i < 5; i++)
		robot_4.battle("Синьор Помидор");
	robot_4.takeDamage(20);
	robot_4.beRepaired(40);
	robot_4.vaulthunter_dot_exe("Синьор Помидор");
	robot_4.ninjaShoebox(robot_2);
	robot_4.rangedAttack("ЛОХ");
	robot_4.meleeAttack("ЛОХ_2");

	std::cout << " 🤡I🤡HOPE🤡IT🤡WAS🤡FUNNY🤡FOR🤡YOU🤡BRO" << std::endl;
	return (0);
}
