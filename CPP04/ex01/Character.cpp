#include "Character.hpp"

Character::Character(){
	std::cout << COLOR_GREEN << "Constructor called" << COLOR_RESET << std::endl;
}

Character::Character(std::string const & name):
	name_(name), AP_(40), weapon_(nullptr)
{
	// std::cout << COLOR_GREEN << name_ << " has " << AP_ << " AP and is unarmed" << COLOR_RESET << std::endl;
}

Character::Character(const Character &copy):
	name_(copy.name_), AP_(copy.AP_), weapon_(copy.weapon_)
{
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
	// std::cout << COLOR_GREEN << name_ << " has " << AP_ << " AP and is unarmed" << COLOR_RESET << std::endl;
}

Character::~Character(){
	std::cout << COLOR_RED "Destuctor called" COLOR_RESET << std::endl;
}

Character& Character::operator=(const Character &object)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &object)
        return *this;
	name_ = object.name_;
	AP_ = object.AP_;
	weapon_  = object.weapon_;
    return (*this);
}

// void Character::recoverAP()
// {

// }


AWeapon *Character::getWeapon() const{
	return weapon_;
}

void Character::equip(AWeapon *weapon){
	this->weapon_ = weapon;
}

void Character::attack(Enemy* enemy)
{
	if(weapon_ != nullptr)
		std::cout << getName() << " has " << getAP() << " AP and wields a " << getWeapon() << std::endl;
	AP_ -= getWeapon()->getAPCost();
	enemy->takeDamage(getWeapon()->getDamage());
	getWeapon()->attack();
}

std::string Character::getName() const
{
	return (this->name_);
}

int			Character::getAP() const
{
	return (AP_);
}
void		Character::setName(std::string name)
{
	name_ = name;
}

void		Character::setAP(int AP)
{
	AP_ = AP;
}

// NAME has AP_NUMBER AP and wields a WEAPON_NAME
// std::ostream & operator << (std::ostream & out, Character &input)
std::ostream& operator<<(std::ostream& out, const Character &input)
{
	if (input.getWeapon() == nullptr)
		out	<< input.getName() << " has " << input.getAP() << " AP and is unarmed" << std::endl;
	else
		out	<< input.getName() << " has " << input.getAP() << " AP and wields a "
				<< input.getWeapon()->getName() << std::endl;
	return out;
}
