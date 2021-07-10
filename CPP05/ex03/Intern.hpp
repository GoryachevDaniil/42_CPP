#ifndef INTERN_HPP
# define INTERN_HPP
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
public:
	Intern();
	Intern(Intern const &copy);
	virtual ~Intern();
	class		FormErrorException : public std::exception {
		const char* what() const throw(){
			return "Form error";
		};
	};
	Intern &operator=(Intern const &object);
	Form *makeForm(std::string const &formName, std::string const &target) const;
	typedef Form *(Intern::*funcs)(std::string const &target) const;
	static const funcs array[3];
	Form*	RobotomyRequest(std::string	const &target) const;
	Form*	PresidentialPardon(std::string	const &target) const;
	Form*	ShrubberyCreation(std::string	const &target) const;
};

#endif
