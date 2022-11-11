#include "Array.hpp"
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#define MAX_VAL 750
int	main()
{
	Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;
	std::cout << "############################################" << std::endl;
	try {
		Array<std::string> array;
		array[0] = "hello";
		std::cout << array[0] << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
	}
	std::cout << "############################################" << std::endl;
	try {
		Array<int> array(1);
		array[0] = 5;
		std::cout << array[0] << std::endl;
	}
	catch (std::exception &exp)
	{
		std::cerr << exp.what() << std::endl;
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
		std::cerr << exp.what() << std::endl;
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
		std::cerr << exp.what() << std::endl;
	}
}