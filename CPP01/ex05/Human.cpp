#include "Human.hpp"

Human::Human()
{

};

Human::~Human()
{
};

std::string	Human::identify()
{
	return(this->c_brain.identify());
};

Brain	&Human::getBrain()
{
	return (this->c_brain);
};
