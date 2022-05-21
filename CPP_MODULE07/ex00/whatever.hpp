#ifndef WHATEVER_HPP
#define WHATEVER_HPP

template <typename T>
void	swap(T &type1, T &type2)
{
	T	tmp;
	tmp = type1;
	type1 = type2;
	type2 = tmp;
}

template <typename T>
T	min(T type1, T type2)
{
	if (type2 <= type1)
		return (type2);
	return (type1);
}

template <typename T>
T	max(T type1, T type2)
{
	if (type2 >= type1)
		return (type2);
	return (type1);
}

#endif