#ifndef FORM_HPP
# define FORM_HPP
class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
	std::string	name_;
	bool		signed_indicator_;
	int			signed_grade_;
	int			execute_grade_;
public:
	Form(std::string name, int signed_grade, int execute_grade);
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
	class		UnsignedFormException : public std::exception {
		const char* what() const throw(){
			return "Form don't signed!";
		};
	};
	void			beSigned(Bureaucrat &bureaucrat);
	void			setSignedIndicator(bool indicator);
	virtual void	execute(Bureaucrat const &executor) const;
};

std::ostream& operator<<(std::ostream& out, const Form &input);

#endif
