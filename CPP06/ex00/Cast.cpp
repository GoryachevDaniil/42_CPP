#include "Cast.hpp"

Cast::Cast(){};

Cast::Cast(const Cast &copy){(void)copy;};

Cast& Cast::operator=(const Cast &object){
    if (this == &object)
        return *this;
    return (*this);
};

Cast::~Cast(){};

void		Cast::castToChar(std::string arg)
{
	std::cout << "Char: ";
	try
	{
		char c = static_cast<char>(std::stoi(arg));
		if (std::isprint(c))
			std::cout << "'" << c << "'" << std::endl;
		else
			std::cout << "Non displayable." << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible." << std::endl;
	}
};

void		Cast::castToInt(std::string arg)
{
	std::cout << "Int: ";
	try
	{
		std::cout << std::stoi(arg) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible." << std::endl;
	}
};

void		Cast::castToFloat(std::string arg)
{
	std::cout << "Float: ";
	try
	{
		std::cout << std::stof(arg) << "f" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible." << std::endl;
	}

};

void		Cast::castToDouble(std::string arg)
{
	std::cout << "Double: ";
	try
	{
		std::cout << std::stof(arg) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible." << std::endl;
	}
};

void		Cast::printResault(std::string arg)
{
	castToChar(arg);
	castToInt(arg);
	castToFloat(arg);
	castToDouble(arg);
};
