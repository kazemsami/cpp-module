#include "easyfind.hpp"
#include <iostream>

int	main()
{
	try
	{
		std::vector<int> vec;
		vec.push_back(10);
		vec.push_back(5);
		std::vector<int>::iterator it = ::easyfind(vec, 5);
		std::cout << *it << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
	try
	{
		std::vector<int> vec;
		vec.push_back(10);
		vec.push_back(5);
		std::vector<int>::iterator it = ::easyfind(vec, 0);
		std::cout << *it << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
}