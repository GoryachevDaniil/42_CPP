#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	try
	{
		Bureaucrat Madisson = Bureaucrat("Madisson", 1);
		try
		{
			Madisson.gradeUp(1);
		}
		catch(const std::exception & e)
		{
			std::cout << COLOR_RED << e.what() << COLOR_RESET << std::endl;
		}
		try
		{
			Form* tree = new ShrubberyCreationForm("home");
			try
			{
				tree->beSigned(Madisson);
				try
				{
					tree->execute(Madisson);
				}
				catch(const std::exception& e)
				{
					std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;
			}
			try
			{
				Form* r2d2 = new RobotomyRequestForm("r2d2");
				try
				{
					r2d2->beSigned(Madisson);
					try
					{
						r2d2->execute(Madisson);
					}
					catch(const std::exception& e)
					{
						std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;;
					}
				}
				catch(const std::exception& e)
				{
					std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;;
			}
			try
			{
				Form* human = new PresidentialPardonForm("Human");
				try
				{
					human->beSigned(Madisson);
					try
					{
						human->execute(Madisson);
					}
					catch(const std::exception& e)
					{
						std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;;
					}
				}
				catch(const std::exception& e)
				{
					std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;
				}
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << '\n';
			}

		}
		catch(const std::exception& e)
		{
			std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;
	}

	Intern  someRandomIntern;
	Form*   rrf;
	try
	{
		rrf = someRandomIntern.makeForm("Shrubbery creation", "Bender");
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR_RED << e.what() << COLOR_RESET << '\n';
	}

	return (0);
}
