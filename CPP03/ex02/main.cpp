#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	FragTrap robot("Крокодил Гонгрена");
	robot.setEnergypoint(100);
	for(int i = 0; i < 5; i++)
	{
		robot.vaulthunter_dot_exe("Чебуратор");
		robot.takeDamage(30);
	}
	robot.beRepaired(20);

	ScavTrap robot_2("Мордордыр");
	robot_2.setEnergypoint(50);
	for(int i = 0; i < 3; i++)
	{
		robot_2.challengeNewcomer("ПятнЫЖко");
		robot_2.takeDamage(30);
	}
	robot_2.beRepaired(20);
	return (0);
}
