#include "Enemy.hpp"

Enemy::Enemy(){};

Enemy::Enemy(int hp, std::string const & type):
	hp_(hp), type_(type){};

Enemy::Enemy(const Enemy &copy):
	hp_(copy.hp_), type_(copy.type_){};

Enemy::~Enemy(){};

Enemy& Enemy::operator=(const Enemy &object){
    if (this == &object)
        return *this;
	hp_ = object.hp_;
	type_ = object.type_;
    return (*this);
};

void	Enemy::setHP(int hp){this->hp_ = hp;};

void	Enemy::setType(std::string	type){this->type_ = type;};

int		Enemy::getHP() const{return (this->hp_);};

std::string	Enemy::getType() const{return (this->type_);};

void 	Enemy::takeDamage(int damage){hp_ -= damage;};

