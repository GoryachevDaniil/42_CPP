#include "AWeapon.hpp"
// #include "Character.hpp"

AWeapon::AWeapon(){};

AWeapon::AWeapon(std::string const & name, int apcost, int damage):
	name_(name), apcost_(apcost), damage_(damage)
{
	std::cout << COLOR_GREEN << "Constructor called" << COLOR_RESET << std::endl;
};

AWeapon::AWeapon(const AWeapon &copy):
	name_(copy.name_), apcost_(copy.apcost_), damage_(copy.damage_)
{
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

AWeapon& AWeapon::operator=(const AWeapon &object)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &object)
        return *this;
	name_ = object.name_;
	apcost_ = object.apcost_;
	damage_ = object.damage_;
    return (*this);
};

AWeapon::~AWeapon(){
	std::cout << COLOR_RED "Destuctor called" COLOR_RESET << std::endl;
};

// std::string	AWeapon::toIntroduce(void) const
// {
	// std::string rezalt = name_ + " " + title_;
	// return (rezalt);
// }

// std::ostream& operator<<(std::ostream& out, const AWeapon &AWeapon)
// {
	// std:: string name = AWeapon.toIntroduce();
//
	// out << "I am " << name << " and I like ponies!" << std::endl;
	// return (out);
// };

void		AWeapon::setName(std::string name){
	this->name_ = name;
};

void		AWeapon::setAPCost(int	apcost){
	this->apcost_ = apcost;
};

void		AWeapon::setDamage(int	damage){
	this->damage_ = damage;
};

std::string	AWeapon::getName() const{
	return (this->name_);
};

int			AWeapon::getAPCost() const{
	return (this->apcost_);
};

int			AWeapon::getDamage() const{
	return (this->damage_);
};



