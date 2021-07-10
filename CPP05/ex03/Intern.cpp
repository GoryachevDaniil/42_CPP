#include "Intern.hpp"

const Intern::funcs Intern::array[3] = {&Intern::ShrubberyCreation, &Intern::RobotomyRequest, &Intern::PresidentialPardon};

Intern::Intern() {};

Intern::Intern(Intern const &copy) {
	(void)copy;
};

Intern &Intern::operator=(Intern const &object) {
	(void)object;
	return (*this);
};

Intern::~Intern() {
};

Form *Intern::makeForm(std::string const &formName, std::string const &target) const {
	std::string forms[3];
	Form* ptr = nullptr;
	forms[0] = "Shrubbery Creation";
	forms[1] = "Robotomy Request";
	forms[2] = "PresidentialPardon";
	for (int i = 0; i < 3; i++)
		if (forms[i] == formName)
			ptr = (this->*array[i])(target);
	if (!ptr)
		throw FormErrorException();
	std::cout << COLOR_GREEN "Intern creates " << ptr->getName() <<std::endl;
	return (ptr);
};

Form*	Intern::RobotomyRequest(std::string	const &target) const{
	Form *ptr = new RobotomyRequestForm(target);
	return (ptr);
};

Form*	Intern::PresidentialPardon(std::string	const &target) const{
	Form *ptr = new PresidentialPardonForm(target);
	return (ptr);
};

Form*	Intern::ShrubberyCreation(std::string	const &target) const{
	Form *ptr = new ShrubberyCreationForm(target);
	return (ptr);
};
