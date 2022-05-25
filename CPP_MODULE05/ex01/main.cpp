#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	{
		try {
			Form form("Dog ownership", 10, 10);
			std::cout << form << std::endl;
			Bureaucrat bureaucrat("Ronald", 2);
			bureaucrat.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			Form form("Dog ownership", -5, 10);
			std::cout << form << std::endl;
			Bureaucrat bureaucrat("Ronald", 2);
			bureaucrat.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			Form form("Dog ownership", 10, 10);
			std::cout << form << std::endl;
			Bureaucrat bureaucrat("Ronald", 15);
			bureaucrat.signForm(form);
			std::cout << form << std::endl;
		}
		catch (std::exception& ex)
		{
			std::cerr << ex.what() << std::endl;
		}
	}
	return (0);
}