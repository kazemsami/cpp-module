#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential pardon", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form) : Form(form.getName(), form.getGradeSignReq(), form.getGradeExReq()), target(form.target)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form)
{
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	if (this != &form)
	{
		Form::operator=(form);
		this->target = form.target;
	}
	return (*this);
}

void PresidentialPardonForm::formAction() const 
{
	std::cout << this->target + " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
