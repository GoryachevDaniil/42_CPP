#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <sstream>
# include <string>
# include <unistd.h>
# include <cstdlib>
# include <ctime>
# include <memory>
# include <fstream>
# include <cmath>
# define	COLOR_RED     "\x1b[31m"
# define	COLOR_GREEN   "\x1b[32m"
# define	COLOR_YELLOW  "\x1b[33m"
# define	COLOR_BLUE    "\x1b[34m"
# define	COLOR_MAGENTA "\x1b[35m"
# define	COLOR_CYAN    "\x1b[36m"
# define	COLOR_RESET   "\x1b[0m"
# define	B_GRAY		"\033[1;30m"
# define	B_RED		"\033[1;31m"
# define	B_GREEN		"\033[1;32m"
# define	B_YELLOW	"\033[1;33m"
# define	B_BLUE		"\033[1;34m"
# define	B_PURPLE	"\033[1;35m"
# define	B_CYAN		"\033[1;36m"
# define	B_WHITE		"\033[1;37m"
# include <exception>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
private:
	std::string name_;
	int			grade_;
public:
	Bureaucrat(std::string name, int grade);
	Bureaucrat(const Bureaucrat &copy);
	Bureaucrat& operator=(const Bureaucrat &object);
	~Bureaucrat();
	std::string	getName() const;
	int			getGrade() const;
	void		setName(std::string name);
	void		setGrade(int grade);
	void		gradeUp(int grade);
	void		gradeDown(int grade);
	class		GradeTooHighException : public std::exception {
		const char* what() const throw(){
			return "Grade too high!";
		};
	};
	class		GradeTooLowException : public std::exception {
		const char* what() const throw(){
			return "Grade too low!";
		};
	};
	void		signForm(std::string form, int flag);
	void		executeForm(Form const &form) const;
};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &input);

#endif
