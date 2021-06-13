#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap robot("Крокодил Гонгрена");
	for(int i = 0; i < 5; i++)
	{
		robot.vaulthunter_dot_exe("Чебуратор");
		robot.takeDamage(30);
	}
	robot.beRepaired(20);
	ScavTrap robot_2("Мордордыр");
	for(int i = 0; i < 3; i++)
	{
		robot_2.challengeNewcomer("ПятнЫЖко");
		robot_2.takeDamage(30);
	}
	robot_2.beRepaired(20);
	return (0);
}
