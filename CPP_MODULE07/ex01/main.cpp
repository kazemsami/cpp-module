#include "iter.hpp"
#include <iostream>
#include <string>

int main()
{
	int arr[] = {5, 2, 3, 4, 2};
	::iter(arr, 5, ::func);
	std::string str_arr[] = {"Hello", "hey", "sup", "wazzap", "howdy"};
	::iter(str_arr, 5, ::func);
	return (0);
}