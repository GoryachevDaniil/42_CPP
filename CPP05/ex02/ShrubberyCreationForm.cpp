#include "ShrubberyCreationForm.hpp"

std::string const ShrubberyCreationForm::_tree[7] = {
"         @@          "
"       @ || @         "
"        \\ // @       "
"    @\\  | | //          "
"       \\| |//@           "
"         | |          "
"        /  \\          "};

ShrubberyCreationForm::ShrubberyCreationForm(std::string const &target):
	Form("Shrubbery Form", 145, 137), target_(target) {};

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &copy):
	Form(copy), target_(copy.target_) {};


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &object)
{
	(void)object;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(){};

void	ShrubberyCreationForm::execute(Bureaucrat const & executor)
{
	Form::execute(executor);
	std::ofstream newfile;

	file.open(_target + "_shrubbery", std::ios::trunc);
	if (!file.is_open())
		throw ShrubberyCreationForm::OpenFileException();
	for (int i = 0; i < 7; i++) {
		file << ShrubberyCreationForm::_tree[i] << std::endl;
	}
	file.close();
};
