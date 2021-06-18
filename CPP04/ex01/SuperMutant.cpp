#include "SuperMutant.hpp"

SuperMutant::SuperMutant(){
	hp_ = 170;
	type_ = "Super Mutant";
	upon_death_ = "Aaargh...";
	std::cout << COLOR_GREEN << "Gaaah. Me want smash heads!" << COLOR_RESET << std::endl;
};

SuperMutant::SuperMutant(int hp, std::string const & type):
	Enemy(hp, type){
	hp_ = 170;
	type_ = "Super Mutant";
	upon_death_ = "Aaargh...";
	std::cout << COLOR_GREEN << "Gaaah. Me want smash heads!" << COLOR_RESET << std::endl;
};

SuperMutant::SuperMutant(const SuperMutant &copy){
	hp_ = copy.hp_;
	type_ = copy.type_;
	upon_death_ = copy.upon_death_;
};

SuperMutant::~SuperMutant(){};

SuperMutant& SuperMutant::operator=(const SuperMutant &object){
    if (this == &object)
        return *this;
	hp_ = object.hp_;
	type_ = object.type_;
	upon_death_ = object.upon_death_;
    return (*this);
};

void SuperMutant::takeDamage(int damage){
	damage -= armor_;
	if(damage > 0)
		hp_ -= damage;
	if(hp_ < 0)
		std::cout << upon_death_ << std::endl;
};

