#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void	iter(T *arr, unsigned int size, void (*f)(T const &))
{
	for (unsigned int i = 0; i < size; ++i)
		f(arr[i]);
}

template <typename T>
void	func(T const & type)
{
	std::cout << type << std::endl;
}

#endif