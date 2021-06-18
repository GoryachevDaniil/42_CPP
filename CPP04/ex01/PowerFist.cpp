#include "PowerFist.hpp"

PowerFist::PowerFist(){
	name_ = "Power Fist";
	apcost_ = 8;
	damage_ = 50;
	attack_output_ = "* pschhh... SBAM! *";
};

PowerFist::PowerFist(std::string const &name, int apcost, int damage):
	AWeapon(name, apcost, damage){
	name_ = "Power Fist";
	apcost_ = 8;
	damage_ = 50;
	attack_output_ = "* pschhh... SBAM! *";
};

PowerFist::PowerFist(const PowerFist &copy){
	name_ = copy.name_;
	apcost_ = copy.apcost_;
	damage_ = copy.damage_;
	attack_output_ = copy.attack_output_;
};

PowerFist& PowerFist::operator=(const PowerFist &object){
    if (this == &object)
        return *this;
	name_ = object.name_;
	apcost_ = object.apcost_;
	damage_ = object.damage_;
    return (*this);
};

PowerFist::~PowerFist(){};

void PowerFist::attack() const{
	std::cout << "\e[37m" << attack_output_ << "\e[0m" << std::endl;
};
