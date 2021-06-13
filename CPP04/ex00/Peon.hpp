#ifndef PEON_HPP
# define PEON_HPP
# include "Sorcerer.hpp"
# include "Victim.hpp"

class Peon : public Victim
{
public:
	Peon();
	Peon(std::string name);
	Peon(const Peon &peon);
	Peon& operator=(const Peon &peon);
	~Peon();
	virtual std::string	toIntroduce(void) const;
	virtual void		getPolymorphed() const;
};

std::ostream& operator<<(std::ostream& out, const Peon &peon);

#endif
