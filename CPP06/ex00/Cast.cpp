#include "Cast.hpp"

Cast::Cast(){};

Cast::Cast(const Cast &copy){(void)copy;};

Cast& Cast::operator=(const Cast &object){
    if (this == &object)
        return *this;
    return (*this);
};

Cast::~Cast(){};

void	Cast::printResault(std::string arg)
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
	std::cout << "Int: ";
	try
	{
		std::cout << std::stoi(arg) << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "impossible." << std::endl;
	}
	std::cout << "Float: ";
	try
	{
		std::size_t pos1 = arg.find("inf");
		std::size_t pos2 = arg.find("nan");
		if (pos1 < 100000 || pos2 < 100000)
		{
			float num = std::stof(arg);
			std::cout << num << "f" << std::endl;
		}
		else
		{
			int flag = 0;
			std::size_t pos = arg.find(".");
			if (pos < 100000)
			{
				std::string str = arg.substr(pos + 1);
				int size = str.size();
				for (int i = 0; i < size; i++)
					if (str[i] != '0')
						flag = 1;
			}
			float num = std::stof(arg);
			if (flag == 1)
				std::cout << num << "f" << std::endl;
			else
				std::cout << num << ".0f" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "impossible." << std::endl;
	}
	std::cout << "Double: ";
	try
	{
		std::size_t pos1 = arg.find("inf");
		std::size_t pos2 = arg.find("nan");
		if (pos1 < 100000 || pos2 < 100000)
		{
			float num = std::stof(arg);
			std::cout << num << std::endl;
		}
		else
		{
			int flag = 0;
			std::size_t pos = arg.find(".");
			if (pos < 100000)
			{
				std::string str = arg.substr(pos + 1);
				int size = str.size();
				for (int i = 0; i < size; i++)
					if (str[i] != '0')
						flag = 1;
			}
			float num = std::stof(arg);
			if (flag == 1)
				std::cout << num << std::endl;
			else
				std::cout << num << ".0" << std::endl;
		}
	}
	catch (std::exception &e)
	{
		std::cout << "impossible." << std::endl;
	}
};

