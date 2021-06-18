#include "AWeapon.hpp"

AWeapon::AWeapon(){};

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	name_(name), apcost_(apcost), damage_(damage){};

AWeapon::AWeapon(const AWeapon &copy):
	name_(copy.name_), apcost_(copy.apcost_), damage_(copy.damage_){};

AWeapon& AWeapon::operator=(const AWeapon &object){
    if (this == &object)
        return *this;
	name_ = object.name_;
	apcost_ = object.apcost_;
	damage_ = object.damage_;
    return (*this);
};

AWeapon::~AWeapon(){};

void		AWeapon::setName(std::string name){this->name_ = name;};

void		AWeapon::setAPCost(int apcost){this->apcost_ = apcost;};

void		AWeapon::setDamage(int damage){this->damage_ = damage;};

std::string	AWeapon::getName() const{return (this->name_);};

int			AWeapon::getAPCost() const{return (this->apcost_);};

int			AWeapon::getDamage() const{return (this->damage_);};



