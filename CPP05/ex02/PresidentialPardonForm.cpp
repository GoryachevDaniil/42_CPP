#include "PresidentialPardonForm.hpp"

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

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	Form::execute(executor);
	std::cout << COLOR_GREEN << target_ << " has been pardoned by Zafod Beeblebrox." COLOR_RESET << std::endl;
	executor.executeForm(*this);
};
