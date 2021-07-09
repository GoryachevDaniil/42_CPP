#ifndef FORM_HPP
# define FORM_HPP
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string	name_;
	bool		signed_indicator_;
	int			signed_grade_;
	int			execute_grade_;
public:
	Form(std::string name, bool signed_indicator, int signed_grade, int execute_grade);
	Form(const Form &copy);
	Form& operator=(const Form &object);
	~Form();
	std::string	getName() const;
	int			getSignedIndicator() const;
	int			getSignedGrade() const;
	int			getExecuteGrade() const;
	class		GradeTooHighException : public std::exception {
		const char* what() const throw(){
			return "Grade too hight!";
		};
	};
	class		GradeTooLowException : public std::exception {
		const char* what() const throw(){
			return "Grade too low!";
		};
	};
	void		beSigned(Bureaucrat &bureaucrat);
	void		setSignedIndicator(bool indicator);
};

std::ostream& operator<<(std::ostream& out, const Form &input);

#endif
