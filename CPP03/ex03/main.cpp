#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
	//--------------------FragTrap--------------------//

	FragTrap robot("Крокодил Гонгрена");

	robot.setEnergypoint(100);
	robot.setHitpoint(100);
	for(int i = 0; i < 5; i++)
		robot.vaulthunter_dot_exe("Чебуратор");
	robot.takeDamage(30);
	robot.beRepaired(20);

	//--------------------ScavTrap--------------------//

	ScavTrap robot_2("Мордордыр");

	robot_2.setEnergypoint(50);
	robot_2.setHitpoint(100);
	for(int i = 0; i < 3; i++)
		robot_2.challengeNewcomer("ПятнЫЖко");
	robot_2.takeDamage(30);
	robot_2.beRepaired(20);

	//--------------------ClapTrap--------------------//

	ClapTrap father("Батек");

	//--------------------NinjaTrap--------------------//

	NinjaTrap robot_3("Панда");
	robot.setHitpoint(100);
	robot.setEnergypoint(100);
	robot_2.setEnergypoint(50);
	robot_3.setEnergypoint(50);
	robot_2.setHitpoint(100);
	robot_3.setHitpoint(60);
	robot_3.ninjaShoebox(father);
	robot_3.ninjaShoebox(robot);
	robot_3.ninjaShoebox(robot_2);
	robot_3.ninjaShoebox(robot_3);

	std::cout << " 🤡I🤡HOPE🤡IT🤡WAS🤡FUNNY🤡FOR🤡YOU🤡BRO" << std::endl;
	return (0);
}
