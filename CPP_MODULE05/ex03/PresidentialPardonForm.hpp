#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <string>
#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	std::string target;
	PresidentialPardonForm();
public:
	PresidentialPardonForm(std::string target);
	~PresidentialPardonForm();
	PresidentialPardonForm(const PresidentialPardonForm& form);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& form);
	void formAction() const;
};

#endif