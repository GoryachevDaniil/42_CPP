#include "Character.hpp"

Character::Character(){};

Character::Character(std::string const & name):
	name_(name), AP_(40), weapon_(nullptr){};

Character::Character(const Character &copy):
	name_(copy.name_), AP_(copy.AP_), weapon_(copy.weapon_){};

Character& Character::operator=(const Character &object){
    if (this == &object)
        return *this;
	name_ = object.name_;
	AP_ = object.AP_;
	weapon_  = object.weapon_;
    return (*this);
}

Character::~Character(){};

AWeapon *Character::getWeapon() const{return weapon_;};

void Character::equip(AWeapon *weapon){this->weapon_ = weapon;};

std::string Character::getName() const{return (this->name_);};

int			Character::getAP() const{return (AP_);};

void		Character::setName(std::string name){name_ = name;};

void		Character::setAP(int AP){AP_ = AP;};

std::ostream& operator<<(std::ostream& out, const Character &input){
	if (input.getWeapon() == nullptr)
		out	<< input.getName() << " has " << input.getAP() << " AP and is unarmed" << std::endl;
	else
		out	<< input.getName() << " has " << input.getAP() << " AP and wields a "
				<< input.getWeapon()->getName() << std::endl;
	return out;
};

void Character::attack(Enemy* enemy){
	if(weapon_ != nullptr)
		std::cout << getName() << " attack " << enemy->getType() << " with " << getWeapon()->getName() << std::endl;
	AP_ -= getWeapon()->getAPCost();
	getWeapon()->attack();
	enemy->takeDamage(getWeapon()->getDamage());
};

void Character::recoverAP(){
	AP_ += 10;
	if (AP_ > 40)
		AP_ = 40;
};
