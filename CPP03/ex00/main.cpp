#include "FragTrap.hpp"

int main(void)
{
	FragTrap robot("Крокодил Гонгрена");
	for(int i = 0; i < 3; i++)
	{
		robot.vaulthunter_dot_exe("Чебуратор");
		robot.takeDamage(30);
	}
	robot.beRepaired(20);
	return (0);
}
