#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery", 145, 137), target(target)
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) : Form(form.getName(), form.getGradeSignReq(), form.getGradeExReq()), target(form.target)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form)
{
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	if (this != &form)
	{
		Form::operator=(form);
		this->target = form.target;
	}
	return (*this);
}

void ShrubberyCreationForm::formAction() const 
{
	std::string path = this->target + "_shrubbery";
	std::ofstream file(path.c_str());
	std::string asciiTree = "              v .   ._, |_  .,\n           `-._\\/  .  \\ /    |/_\n               \\\\  _\\, y | \\//\n         _\\_.___\\\\, \\\\/ -.\\||\n           `7-,--.`._||  / / ,\n           /'     `-. `./ / |/_.'\n                     |    |//\n                     |_    /\n                     |-   |\n                     |   =|\n                     |    |\n--------------------/ ,  . \\--------._";
	file << asciiTree;
	file.close();
}
