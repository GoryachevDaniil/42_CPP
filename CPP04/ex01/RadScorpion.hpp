#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP
# include "Enemy.hpp"

class RadScorpion : virtual public Enemy
{
private:
	std::string upon_death_;
public:
	RadScorpion();
	RadScorpion(int hp, std::string const & type);
	RadScorpion(const RadScorpion &copy);
	RadScorpion& operator=(const RadScorpion &object);
	~RadScorpion();
	virtual void takeDamage(int damage);
};

std::ostream& operator<<(std::ostream& out, const RadScorpion &input);

#endif
