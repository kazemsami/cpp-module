#include "iter.hpp"
#include <iostream>
#include <string>

int main()
{
	int arr[] = {5, 2, 3, 4, 2};
	::iter(arr, 5, &(::func));
	for (int i = 0; i < 5; ++i)
	{
		std::cout << arr[i] << std::endl;
	}
	std::string str_arr[] = {"Hello", "hey", "sup", "wazzap", "howdy"};
	::iter(str_arr, 5, &(::func));
	for (int i = 0; i < 5; ++i)
	{
		std::cout << str_arr[i] << std::endl;
	}
	return (0);
}