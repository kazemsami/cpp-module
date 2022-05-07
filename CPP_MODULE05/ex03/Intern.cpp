#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern::Intern(const Intern& intern)
{
	std::cout << "Intern copy constructor called" << std::endl;
	(void)intern;
}

Intern& Intern::operator=(const Intern& intern)
{
	std::cout << "Intern assignment operator called" << std::endl;
	(void)intern;
	return (*this);
}

Form* Intern::makeForm(std::string name, std::string target)
{
	Form *form[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target),
					new PresidentialPardonForm(target)};
	for (int i = 0; i < 3; ++i)
	{
		if (form[i]->getName() == name)
		{
			for (int z = 0; z < 3; ++z)
			{
				if (i != z)
					delete(form[z]);
			}
			std::cout << "Intern creates " << form[i]->getName() << std::endl;
			return (form[i]);
		}
	}
	for (int i = 0; i < 3; ++i)
	{
		delete(form[i]);
	}
	throw FormError("Couldn't create a form with that name");
}

Intern::FormError::FormError(const std::string& msg) : _msg(msg)
{
}

Intern::FormError::~FormError() throw()
{
}

const char* Intern::FormError::what() const throw()
{
	return (_msg.c_str());
}