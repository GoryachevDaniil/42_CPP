#include "MateriaSource.hpp"

MateriaSource::MateriaSource():
    bag_(), index_(0)
{
	for(int i = 0; i < 4; i++)
		bag_[i] = nullptr;
};

MateriaSource::MateriaSource(const MateriaSource &copy):
    bag_(),  index_(copy.index_)
{
	for (int i = 0; i < 4; i++)
		bag_[i] = copy.bag_[i];
};

MateriaSource & MateriaSource::operator=(const MateriaSource &object)
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
	return (*this);
};

MateriaSource::~MateriaSource()
{
	int i = -1;
	while(i++ < 3)
		if (bag_[i] != nullptr)
			delete bag_[i];
};

void MateriaSource::learnMateria(AMateria *materia)
{
	if (materia)
	{
		int i = -1;
		while (i++ < 4)
		{
			if (bag_[i] == nullptr)
			{
				bag_[i] = materia;
				index_ = i;
				break;
			}
		}
	}
};

AMateria * MateriaSource::createMateria(const std::string &type)
{
	int i = -1;
	while (i++ < index_)
	{
		if (bag_[i]->getType() == type)
		{
			AMateria *aMateria = bag_[i]->clone();
			return (aMateria);
		}
	}
	return (nullptr);
};
