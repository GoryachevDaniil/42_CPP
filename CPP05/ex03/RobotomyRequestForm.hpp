#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP
#include "Form.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string	target_;
public:
	RobotomyRequestForm(std::string const &target);
	RobotomyRequestForm(RobotomyRequestForm const &copy);
	RobotomyRequestForm& operator=(const RobotomyRequestForm &object);
	virtual ~RobotomyRequestForm();
	void	execute(Bureaucrat const & executor) const;
};

#endif
