#ifndef INTERN_HPP
#define INTERN_HPP

#include <string>
#include <iostream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Form.hpp"

class Intern
{
private:
public:
	Intern();
	~Intern();
	Intern(const Intern& intern);
	Intern& operator=(const Intern& intern);
	Form *makeForm(std::string name, std::string target);
	class FormError : public std::exception
	{
	private:
		std::string _msg;
	public:
		FormError(const std::string& msg);
		~FormError() throw();
		const char* what() const throw();
	};
};

#endif