#include "Array.hpp"
#include <iostream>

int	main()
{
	try {
		Array<int> array;
		array[0] = 5;
		std::cout << array[0] << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
	std::cout << "############################################" << std::endl;
	try {
		Array<int> array(6);
		array[0] = 5;
		std::cout << array[0] << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
	std::cout << "############################################" << std::endl;
	try {
		Array<int> array(6);
		array[0] = 5;
		Array<int> array2(array);
		std::cout << array2[0] << std::endl;
		array2[0] = 2;
		std::cout << array2[0] << std::endl;
		std::cout << array[0] << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
	std::cout << "############################################" << std::endl;
	try {
		Array<int> array(6);
		array[0] = 5;
		Array<int> array2;
		array2 = array;
		std::cout << array2[0] << std::endl;
		array2[0] = 2;
		std::cout << array2[0] << std::endl;
		std::cout << array[0] << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cout << exp.what() << std::endl;
	}
}