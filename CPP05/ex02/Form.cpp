#include "Form.hpp"

Form::Form(std::string const name, int const signed_grade, int const execute_grade):
	name_(name), signed_indicator_(false), signed_grade_(signed_grade), execute_grade_(execute_grade)
{
	if (signed_grade_ < 1 || execute_grade_ < 1)
	{
		throw GradeTooHighException();
	}
	else if (signed_grade_ > 150 || execute_grade_ > 150)
	{
		throw GradeTooLowException();
	}
	else
		std::cout << COLOR_GREEN "Form " << name_ << " created!" COLOR_RESET << std::endl;
};

Form::Form(const Form &copy):
	name_(copy.name_),\
	signed_indicator_(copy.signed_indicator_),\
	signed_grade_(copy.signed_grade_),\
	execute_grade_(copy.execute_grade_)\
{};

Form& Form::operator=(const Form &object){
    if (this == &object)
        return *this;
	this->signed_indicator_ = object.signed_indicator_;
    return (*this);
};

std::ostream& operator<<(std::ostream& out, const Form &input)
{
	out << "Form " << input.getName() << " status: " << input.getSignedIndicator()
		<< " whit signed_grade: " << input.getSignedGrade() << " and execute_grade: "
		<< input.getExecuteGrade() <<std::endl;
	return (out);
};

Form::~Form(){};

std::string const &Form::getName() const{return (this->name_);};

int			Form::getSignedIndicator() const{return (this->signed_indicator_);};

int			Form::getSignedGrade() const{return (this->signed_grade_);};

int			Form::getExecuteGrade() const{return (this->execute_grade_);};

void		Form::setSignedIndicator(bool indicator)
{
	this->signed_indicator_ = indicator;
};

void		Form::beSigned(Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > getSignedGrade())
	{
		bureaucrat.signForm(getName(), 0);
		throw GradeTooLowException();
	}
	setSignedIndicator(true);
	bureaucrat.signForm(getName(), 1);
};

void	Form::execute(Bureaucrat const &executor) const
{
	if (executor.getGrade() > getExecuteGrade())
		throw GradeTooLowException();
	if (!signed_indicator_)
		throw UnsignedFormException();
};
