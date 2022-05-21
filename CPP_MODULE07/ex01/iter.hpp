#ifndef ITER_HPP
#define ITER_HPP

template <typename T>
void	iter(T *arr, int size, void (*f)(T&))
{
	for (int i = 0; i < size; ++i)
		f(arr[i]);
}

template <typename T>
void	func(T& type)
{
	type += type;
}

#endif