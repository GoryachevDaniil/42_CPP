#include "PowerFist.hpp"

PowerFist::PowerFist(){
	// std::cout << COLOR_GREEN << "Constructor called" << COLOR_RESET << std::endl;
}

PowerFist::PowerFist(std::string const &name, int apcost, int damage):
	AWeapon(name, apcost, damage)
{
	name_ = "Power Fist";
	apcost_ = 8;
	damage_ = 50;
	attack_output_ = "* pschhh... SBAM! *";
	// std::cout << COLOR_GREEN << "Constructor called" << COLOR_RESET << std::endl;
};

PowerFist::PowerFist(const PowerFist &copy)
{
	name_ = copy.name_;
	apcost_ = copy.apcost_;
	damage_ = copy.damage_;
	attack_output_ = copy.attack_output_;
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

PowerFist& PowerFist::operator=(const PowerFist &object)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &object)
        return *this;
	name_ = object.name_;
	apcost_ = object.apcost_;
	damage_ = object.damage_;
    return (*this);
};

// std::string	PowerFist::toIntroduce(void) const
// {
	// std::string rezalt = name_ + " " + title_;
	// return (rezalt);
// }

// std::ostream& operator<<(std::ostream& out, const PowerFist &input)
// {
	// std:: string name = PowerFist.toIntroduce();
//
	// out << "I am " << name << " and I like ponies!" << std::endl;
	// return (out);
// };

void PowerFist::attack() const{
	std::cout << "\e[37m* пииуууу пииууу пииууу *\e[0m" << std::endl;
}

PowerFist::~PowerFist()
{
	std::cout << COLOR_RED "Destuctor called" COLOR_RESET << std::endl;
}
