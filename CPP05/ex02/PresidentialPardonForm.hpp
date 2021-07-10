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
	PresidentialPardonForm& operator=(const PresidentialPardonForm &object);
	virtual ~PresidentialPardonForm();
	void	execute(Bureaucrat const & executor) const;
};


#endif
