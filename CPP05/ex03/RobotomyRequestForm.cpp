#include "RobotomyRequestForm.hpp"


RobotomyRequestForm::RobotomyRequestForm(std::string const &target):
	Form("RobotomyRequest Form", 72, 45), target_(target) {};

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &copy):
	Form(copy), target_(copy.target_) {};

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &object){
	(void)object;
	return (*this);
};

RobotomyRequestForm::~RobotomyRequestForm(){};

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	if (!signed_indicator_)
		throw UnsignedFormException();
	srand(time(NULL));
	std::cout << COLOR_GREEN "Woozuu......ff..." COLOR_RESET << std::endl;
	if (rand() % 2 == 0)
		std::cout << COLOR_GREEN << target_ << " robotomized!" COLOR_RESET << std::endl;
	else
		std::cout << COLOR_RED << target_ << " robotomized fail." COLOR_RESET<< std::endl;
	executor.executeForm(*this);
};
