#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class ShrubberyCreationForm : public Form
{
private:
	std::string	target_;
	static const std::string tree_[7];
public:
	ShrubberyCreationForm(std::string const &target);
	ShrubberyCreationForm(ShrubberyCreationForm const &copy);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm &object);
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
	class		UnsignedFormException : public std::exception {
		const char* what() const throw(){
			return "Unsigned form";
		};
	};
	void	execute(Bureaucrat const &executor) const;
};

#endif
