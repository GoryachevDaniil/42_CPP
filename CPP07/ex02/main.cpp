#include "Array.hpp"

void	test1()
{
	Array<int> arr(5);
	try
	{
		for (int i = 0; i < arr.getSize(); i++)
			arr[i] = i;
		for (int i = 0; i < arr.getSize(); i++)
			std::cout << arr[i] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test2()
{
	Array<int> arr(5);
	try
	{
		for (int i = 0; i < arr.getSize(); i++)
			arr[i] = i;
		for (int i = 0; i < arr.getSize(); i++)
			std::cout << arr[i + 1] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

void	test3()
{
	Array<std::string> arr(5);
	std::string		str = "jfdjosklfdghjdygjhsaWQ3RCAnm";
	srand(time(0));
	try
	{
		for (int i = 0; i < arr.getSize(); i++)
		{
			for (unsigned long j = 0; j < str.length(); j++)
				arr[i] += str[rand() % 9];
		}
		for (int i = 0; i < arr.getSize(); i++)
			std::cout << arr[i] << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}

int main()
{
	std::cout << "Test 1:" << "\n";
	test1();
	std::cout << "\n" << "Test 2:" << "\n";
	test2();
	std::cout << "\n" << "Test 3:" << "\n";
	test3();
	return (0);
}
