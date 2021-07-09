#include "Bureaucrat.hpp"

int main(void)
{
	Bureaucrat Madisson = Bureaucrat("Madisson", 1);
	std::cout << COLOR_YELLOW "Try to make William with grade 0..." << std::endl;
	try
	{
		Bureaucrat John = Bureaucrat("William", 0);
	}
	catch(const std::exception & e)
	{
		std::cout << COLOR_RED << e.what() << COLOR_RESET << std::endl;
	}
	std::cout << COLOR_YELLOW "Try to make John with grade 157..." << std::endl;
	try
	{
		Bureaucrat John = Bureaucrat("John", 157);
	}
	catch(const std::exception & e)
	{
		std::cout << COLOR_RED << e.what() << COLOR_RESET << std::endl;
	}
	std::cout << COLOR_YELLOW "Try to up Madisson's grade from 1..." << std::endl;
	try
	{
		Madisson.gradeUp(1);
	}
	catch(const std::exception & e)
	{
		std::cout << COLOR_RED << e.what() << COLOR_RESET << std::endl;
	}
	std::cout << COLOR_GREEN << Madisson;
	return (0);
}
