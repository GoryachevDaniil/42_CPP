#include "Character.hpp"

Character::Character(const std::string &name):
	name_(name), index_(0), bag_()
{
	for(int i = 0; i < 4; i++)
		bag_[i] = nullptr;
}

Character::Character(const Character &copy):
	name_(copy.name_), index_(copy.index_), bag_()
{
	for (int i = 0; i < 4; i++)
		bag_[i] = copy.bag_[i];
}

Character & Character::operator=(const Character &object)
{
	if (this == &object)
		return (*this);
	for (int i = 0; i < 4; i++)
		delete bag_[i];
	for (int i = 0; i < 4; i++)
	{
		if (object.bag_[i])
			bag_[i] = object.bag_[i]->clone();
		else
			bag_[i] = NULL;
	}
	name_ = object.name_;
	return (*this);
}

Character::~Character()
{
	 for (int i = 0; i < 4; i++)
		delete bag_[i];
}

const std::string &Character::getName() const{return (name_);};

void Character::equip(AMateria* materia)
{
	if (materia)
	{
		for (int i = 0; bag_[i++] != nullptr; index_++);
		if (bag_[index_] == nullptr)
			bag_[index_] = materia;
	}
}

void Character::unequip(int index_)
{
	if (bag_[index_])
		bag_[index_] = nullptr;
}

void Character::use(int index, ICharacter &target)
{
	if (bag_[index] && &target != this)
		bag_[index]->use(target);
}
