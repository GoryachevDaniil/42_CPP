#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"

class Character : public ICharacter
{
private:
	std::string name_;
	int			index_;
	AMateria 	*bag_[4];
public:
	Character(std::string const &name);
	Character(Character const &copy);
	Character &operator=(Character const &object);
	virtual ~Character();
	virtual const std::string &getName() const;
	virtual void equip(AMateria* materia);
	virtual void unequip(int index);
	virtual void use(int index, ICharacter& target);
};

#endif
