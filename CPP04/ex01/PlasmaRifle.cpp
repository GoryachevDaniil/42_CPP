#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(){
	name_ = "Plasma Rifle";
	apcost_ = 5;
	damage_ = 21;
	attack_output_ = "* piouuu piouuu piouuu *";
};

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage):
	AWeapon(name, apcost, damage){
	name_ = "Plasma Rifle";
	apcost_ = 5;
	damage_ = 21;
	attack_output_ = "* piouuu piouuu piouuu *";
};

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy){
	name_ = copy.name_;
	apcost_ = copy.apcost_;
	damage_ = copy.damage_;
	attack_output_ = copy.attack_output_;
};

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &object){
    if (this == &object)
        return *this;
	name_ = object.name_;
	apcost_ = object.apcost_;
	damage_ = object.damage_;
    return (*this);
};

PlasmaRifle::~PlasmaRifle(){};

void PlasmaRifle::attack() const{
	std::cout << attack_output_ << std::endl;
};
