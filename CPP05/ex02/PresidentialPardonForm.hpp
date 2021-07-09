#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string	target_;
public:
	PresidentialPardonForm(std::string const &target);
	PresidentialPardonForm(PresidentialPardonForm const &copy);
	Form& operator=(const Form &object);
	virtual ~PresidentialPardonForm();
	void	execute(Bureaucrat const & executor);
};

PresidentialPardonForm::PresidentialPardonForm(std::string const &target):
	Form("PresidentialPardon Form", 25, 5), target_(target) {};

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &copy):
	Form(copy), target_(copy.target_) {};


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &object)
{
	(void)object;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){};

#endif
