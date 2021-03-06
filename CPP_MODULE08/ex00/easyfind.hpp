#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
typename std::vector<T>::iterator easyfind(std::vector<T> vec, int occ)
{
	typename std::vector<T>::iterator it = std::find(vec.begin(), vec.end(), occ);
	if (it == vec.end())
		throw std::invalid_argument("Couldn't find occurance in vector");
	return (it);
}

#endif
