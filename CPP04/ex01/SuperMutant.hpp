#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP
# include "Enemy.hpp"

class SuperMutant : virtual public Enemy
{
private:
	std::string			upon_death_;
	static const int	armor_ = 3;
public:
	SuperMutant();
	SuperMutant(int hp, std::string const & type);
	SuperMutant(const SuperMutant &copy);
	SuperMutant& operator=(const SuperMutant &object);
	~SuperMutant();
	virtual void takeDamage(int damage);
};

std::ostream& operator<<(std::ostream& out, const SuperMutant &input);

#endif
