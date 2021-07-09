#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade):
	name_(name), grade_(grade)
{
	if (grade_ < 1)
	{
		throw GradeTooHighException();
	}
	else if (grade_ > 150)
	{
		throw GradeTooLowException();
	}
	else
		std::cout << COLOR_GREEN "Bureaucrat " << name_ << " comes with grade " << grade_ << "!" COLOR_RESET << std::endl;
};

Bureaucrat::Bureaucrat(const Bureaucrat &copy):
	name_(copy.name_), grade_(copy.grade_){};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &object){
    if (this == &object)
        return *this;
	name_ = object.name_;
	grade_ = object.grade_;
    return (*this);
};

Bureaucrat::~Bureaucrat(){};

std::ostream& operator<<(std::ostream& out, const Bureaucrat &input)
{
	out << "Bureaucrat " << input.getName() << " have grade " << input.getGrade() << "!" << std::endl;
	return (out);
};

std::string	Bureaucrat::getName() const{return(this->name_);};

int			Bureaucrat::getGrade() const{return(this->grade_);};

void		Bureaucrat::setName(std::string name){this->name_ = name;};

void		Bureaucrat::setGrade(int grade){this->grade_ = grade;};

void		Bureaucrat::gradeUp(int grade)
{
	if (grade_ -= grade < 1)
		throw GradeTooHighException();
	this->grade_ -= grade;
};

void		Bureaucrat::gradeDown(int grade)
{
	if (grade_ > 150)
		throw GradeTooLowException();
	this->grade_ += grade;
};

void		Bureaucrat::signForm(std::string form, int flag)
{
	if (flag == 1)
		std::cout << COLOR_GREEN << getName() << " signs " << form << "!" COLOR_RESET << std::endl;
	else if (flag == 0)
		std::cout << COLOR_RED << getName() << " cannot sign " << form << " because "
			<< getGrade() << " " COLOR_RESET;
};

void		Bureaucrat::executeForm(Form const &form)
{
	std::cout << getName() << " executes " << form.getName() << std::endl;
};
