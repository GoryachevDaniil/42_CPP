#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(){
	// std::cout << COLOR_GREEN << "Constructor called" << COLOR_RESET << std::endl;
}

PlasmaRifle::PlasmaRifle(std::string const &name, int apcost, int damage):
	AWeapon(name, apcost, damage)
{
	name_ = "Plasma Rifle";
	apcost_ = 5;
	damage_ = 21;
	attack_output_ = "* piouuu piouuu piouuu *";
	// std::cout << COLOR_GREEN << "Constructor called" << COLOR_RESET << std::endl;
};

PlasmaRifle::PlasmaRifle(const PlasmaRifle &copy)
{
	name_ = copy.name_;
	apcost_ = copy.apcost_;
	damage_ = copy.damage_;
	attack_output_ = copy.attack_output_;
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

PlasmaRifle& PlasmaRifle::operator=(const PlasmaRifle &object)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &object)
        return *this;
	name_ = object.name_;
	apcost_ = object.apcost_;
	damage_ = object.damage_;
    return (*this);
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

PlasmaRifle::~PlasmaRifle()
{
	std::cout << COLOR_RED "Destuctor called" COLOR_RESET << std::endl;
}

void PlasmaRifle::attack() const{
	// std::cout << "\e[37m* пииуууу пииууу пииууу *\e[0m" << std::endl;
}
