#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	{
		Form* rrf = NULL;
		try {
			Intern someRandomIntern;
			rrf = someRandomIntern.makeForm("robotomy request", "Bender");
			Bureaucrat burea("Carl", 4);
			rrf->execute(burea);
			delete(rrf);
		}
		catch (std::exception& ex)
		{
			if (rrf != NULL)
				delete (rrf);
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		Form* rrf = NULL;
		try {
			Intern someRandomIntern;
			rrf = someRandomIntern.makeForm("Presidential pardon", "Bender");
			Bureaucrat burea("Cute cat", 10);
			rrf->execute(burea);
			delete(rrf);
		}
		catch (std::exception& ex)
		{
			if (rrf != NULL)
				delete (rrf);
			std::cout << ex.what() << std::endl;
		}
	}
	return (0);
}