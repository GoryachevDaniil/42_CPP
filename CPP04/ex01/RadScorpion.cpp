#include "RadScorpion.hpp"

RadScorpion::RadScorpion():
	Enemy(){
	hp_ = 80;
	type_ = "RadScorpion";
	upon_death_ = "* SPROTCH *";
	std::cout << COLOR_GREEN "* click click click *" COLOR_RESET << std::endl;
};

RadScorpion::RadScorpion(int hp, std::string const & type):
	Enemy(hp, type){
	hp_ = 80;
	type_ = "RadScorpion";
	upon_death_ = "* SPROTCH *";
	std::cout << COLOR_GREEN "* click click click *" COLOR_RESET << std::endl;
};

RadScorpion::RadScorpion(const RadScorpion &copy){
	hp_ = copy.hp_;
	type_ = copy.type_;
	upon_death_ = copy.upon_death_;
};

RadScorpion::~RadScorpion(){};

RadScorpion& RadScorpion::operator=(const RadScorpion &object){
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &object)
        return *this;
	hp_ = object.hp_;
	type_ = object.type_;
	upon_death_ = object.upon_death_;
    return (*this);
};

void RadScorpion::takeDamage(int damage){
	if(damage > 0)
		hp_ -= damage;
	if(getHP() < 0)
		std::cout << upon_death_ << std::endl;
};
