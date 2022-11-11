#include "easyfind.hpp"
#include <iostream>
#include <stack>
#include <list>

int	main()
{
	try
	{
		std::list<int> lst;
		lst.assign(5, 10);
		std::cout << ::easyfind(lst, 10) << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
	try
	{
		std::vector<int> vec;
		vec.assign(5, 10);
		std::cout << ::easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
	try
	{
		std::list<int> lst;
		std::cout << ::easyfind(lst, 10) << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
	try
	{
		std::vector<int> vec;
		std::cout << ::easyfind(vec, 10) << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
}