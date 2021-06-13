#include "Zombie.hpp"

Zombie::Zombie(){
	std::cout << COLOR_GREEN "Zombie 🧟‍♂️ alive!" COLOR_RESET << std::endl;
};

Zombie::Zombie(std::string name, std::string type){
	c_name = name;
	c_type = type;
	std::cout << COLOR_GREEN "Zombie 🧟‍♂️ alive!" COLOR_RESET << std::endl;
};

Zombie::~Zombie(){
	std::cout << COLOR_RED "Zombie 🧟‍♂️ die!" COLOR_RESET << std::endl;
};

void		Zombie::announce(Zombie *zombiezzzi){
	std::cout << COLOR_YELLOW "<" << zombiezzzi->c_name << " (" << zombiezzzi->c_type << ")>" << " Braiiiiiiinnnssss... " COLOR_RESET << std::endl;
};

std::string Zombie::getName(){
	return(this->c_name);
};

std::string Zombie::getType(){
	return(this->c_type);
};

void		Zombie::setName(std::string name){
	c_name = name;
};

void		Zombie::setType(std::string type){
	c_type = type;
};
