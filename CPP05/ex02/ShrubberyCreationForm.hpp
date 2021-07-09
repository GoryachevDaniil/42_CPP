#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target_;
	const std::string tree_[7];
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	Form& operator=(const Form &object);
	virtual ~ShrubberyCreationForm();
	class		OpenFileException : public std::exception {
		const char* what() const throw(){
			return "Can't open file.";
		};
	};
	class		WriteToFileException : public std::exception {
		const char* what() const throw(){
			return "Can't write to file";
		};
	};
	void	execute(Bureaucrat const &executor);
};

#endif
