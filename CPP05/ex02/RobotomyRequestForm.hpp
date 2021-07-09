#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target_;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	Form& operator=(const Form &object);
	virtual ~RobotomyRequestForm();
	void	execute(Bureaucrat const & executor);
};

RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("RobotomyRequest Form", 72, 45), target_(target) {};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
	Form(copy), target_(copy.target_) {};


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &object)
{
	(void)object;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){};

#endif
