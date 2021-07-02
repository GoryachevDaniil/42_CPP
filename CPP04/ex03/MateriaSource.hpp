#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
	AMateria	*bag_[4];
	int			index_;
public:
	MateriaSource();
	MateriaSource(MateriaSource const &copy);
	MateriaSource &operator=(MateriaSource const &object);
	virtual ~MateriaSource();
	virtual void learnMateria(AMateria*);
	virtual AMateria* createMateria(std::string const & type);
};

#endif
