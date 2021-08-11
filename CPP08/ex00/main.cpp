#include "easyfind.h"

int main(void)
{
	std::vector<int> vec;

	for (int count = 0; count < 20; ++count)
		vec.push_back(count);
	try
	{
		std::cout << *(easyfind(vec, 40)) << std::endl;
	}
	catch(const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	return (0);
}
