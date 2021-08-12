#include "easyfind.h"

int main(void)
{
	std::cout << "------------------" << std::endl;
	std::cout << "------TEST 1------" << std::endl;
	std::cout << "------------------" << std::endl;
	std::vector<int> vec;
	for (int count = 0; count < 20; ++count)
		vec.push_back(count);
	try
	{
		std::cout << "Number: " <<  *(easyfind(vec, 10)) << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------" << std::endl;
	std::cout << "------TEST 2------" << std::endl;
	std::cout << "------------------" << std::endl;
	std::vector<int> vec2;
	for (int count = 0; count < 10; ++count)
		vec.push_back(count);
	try
	{
		std::cout << "Number: " << *(easyfind(vec, 20)) << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "------------------" << std::endl;
	return (0);
}
