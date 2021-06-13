#include "Brain.hpp"
#include "Human.hpp"
# include <iostream>

Brain::Brain()
{
};

Brain::~Brain()
{
};

std::string	Brain::identify()
{
	std::stringstream ptr;
	ptr << this;
	return (ptr.str());
}


