#ifndef ICE_HPP
# define ICE_HPP
# include "AMateria.hpp"

class Ice : public AMateria
{
public:
	Ice();
	Ice(Ice &copy);
	Ice &operator=(Ice &object);
	virtual ~Ice();
	virtual AMateria* clone() const;
	virtual void use(ICharacter& target);
};

#endif
