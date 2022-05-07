#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <string>
#include <iostream>
#include <ctime>
#include "Form.hpp"

class RobotomyRequestForm : public Form
{
private:
	std::string target;
	RobotomyRequestForm();
public:
	RobotomyRequestForm(std::string target);
	~RobotomyRequestForm();
	RobotomyRequestForm(const RobotomyRequestForm& form);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& form);
	void formAction() const;
};

#endif