#ifndef FORM_HPP
# define FORM_HPP
class Form;
#include "Bureaucrat.hpp"


class Form {
private:
	Form();
protected:
	std::string const	name_;
	bool				signed_indicator_;
	int const 			signed_grade_;
	int const			execute_grade_;
public:
	Form(std::string const name, int const signed_grade, int const execute_grade_);
	Form(Form const &copy);
	Form &operator=(Form const &object);
	virtual ~Form();
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
			return "Unsigned form!";
		};
	};
	std::string const	&getName() const;
	int					getSignedIndicator() const;
	int					getSignedGrade() const;
	int					getExecuteGrade() const;
	void				beSigned(Bureaucrat &bureaucrat);
	void				setSignedIndicator(bool indicator);
	virtual void		execute(Bureaucrat const &executor) const = 0;
};

std::ostream &operator << (std::ostream &out, Form const &form);

#endif
