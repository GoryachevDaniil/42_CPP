#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

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

	std::cout << COLOR_YELLOW "Try to make William with grade 150..." << std::endl;
	try
	{
		Bureaucrat William = Bureaucrat("William", 150);
		try
		{
			Form Constitution = Form("Constitution", 1, 50);
			std::cout << COLOR_CYAN << Constitution;
			try
			{
				Constitution.beSigned(William);
			}
			catch(const std::exception& e)
			{
				std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;
			}
			std::cout << COLOR_CYAN << Constitution;
		}
		catch(const std::exception& e)
		{
			std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;
		}
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


	std::cout << COLOR_YELLOW "Try to make UKRF..." << std::endl;
	try
	{
		Form UKRF = Form("UKRF", 0, 50);
	}
	catch(const std::exception& e)
	{
		std::cerr << COLOR_RED << e.what() << COLOR_RESET << std::endl;
	}

	return (0);
}
