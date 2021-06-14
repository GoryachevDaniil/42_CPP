#include "Enemy.hpp"

Enemy::Enemy(){
};

Enemy::Enemy(int hp, std::string const & type):
	hp_(hp), type_(type)
{
	std::cout << COLOR_GREEN << "Constructor called" << COLOR_RESET << std::endl;
};

Enemy::Enemy(const Enemy &copy):
	hp_(copy.hp_), type_(copy.type_)
{
	std::cout << COLOR_GREEN "Copy constructor called" COLOR_RESET << std::endl;
};

Enemy::~Enemy(){
	std::cout << COLOR_RED "Destuctor called" COLOR_RESET << std::endl;
};

Enemy& Enemy::operator=(const Enemy &object)
{
	std::cout << COLOR_MAGENTA "Assignation operator called" COLOR_RESET << std::endl;
    if (this == &object)
        return *this;
	hp_ = object.hp_;
	type_ = object.type_;
    return (*this);
};


// std::string	Enemy::toIntroduce(void) const
// {
	// std::string rezalt = name_ + " " + title_;
	// return (rezalt);
// }

// std::ostream& operator<<(std::ostream& out, const Enemy &object)
// {
	// std:: string name = Enemy.toIntroduce();
//
	// out << "I am " << name << " and I like ponies!" << std::endl;
	// return (out);
// };

void		Enemy::setHP(int hp){
	this->hp_ = hp;
};

void		Enemy::setType(std::string	type){
	this->type_ = type;
};

int			Enemy::getHP() const{
	return (this->hp_);
};

std::string	Enemy::getType() const{
	return (this->type_);
};

void 	Enemy::takeDamage(int damage)
{
	if(damage > 0)
		hp_ -= damage;
};
