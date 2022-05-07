#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		try {
			const Form* form = new ShrubberyCreationForm("Home");
			Bureaucrat bureaucrat("George", 150);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const Form* form = new RobotomyRequestForm("Elfazoid");
			Bureaucrat bureaucrat("George", 150);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const Form* form = new PresidentialPardonForm("A cute cat");
			Bureaucrat bureaucrat("George", 150);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const Form* form = new ShrubberyCreationForm("Home");
			Bureaucrat bureaucrat("George", 1);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const Form* form = new RobotomyRequestForm("Elfazoid");
			Bureaucrat bureaucrat("George", 1);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			const Form* form = new PresidentialPardonForm("A cute cat");
			Bureaucrat bureaucrat("George", 1);
			bureaucrat.executeForm(*form);
			delete(form);
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	return (0);
}