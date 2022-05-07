#include "Bureaucrat.hpp"

int main()
{
	{
		try {
			Bureaucrat bureau("George", 150);
			std::cout << bureau.getName() << std::endl;
			std::cout << bureau.getGrade() << std::endl;
			bureau.decrementGrade();
			std::cout << bureau.getGrade() << std::endl;
			bureau.incrementGrade();
			std::cout << bureau.getGrade() << std::endl;
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			Bureaucrat bureau("George", 1);
			std::cout << bureau << std::endl;
			bureau.incrementGrade();
			std::cout << bureau << std::endl;
			bureau.decrementGrade();
			std::cout << bureau << std::endl;
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			Bureaucrat bureau("George", -5);
			std::cout << bureau.getName() << std::endl;
			std::cout << bureau.getGrade() << std::endl;
			bureau.decrementGrade();
			std::cout << bureau.getGrade() << std::endl;
			bureau.incrementGrade();
			std::cout << bureau.getGrade() << std::endl;
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
	std::cout << "#######################################################\n#######################################################" << std::endl;
	{
		try {
			Bureaucrat bureau("George", 170);
			std::cout << bureau << std::endl;
			bureau.decrementGrade();
			std::cout << bureau << std::endl;
			bureau.incrementGrade();
			std::cout << bureau << std::endl;
		}
		catch (std::exception& ex)
		{
			std::cout << ex.what() << std::endl;
		}
	}
}