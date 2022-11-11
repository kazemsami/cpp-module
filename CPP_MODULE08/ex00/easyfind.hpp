#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>

template <typename T>
int easyfind(T cont, int occ)
{
	typename T::iterator it = std::find(cont.begin(), cont.end(), occ);
	if (it == cont.end())
		throw std::invalid_argument("Couldn't find occurance in container");
	return (*it);
}

#endif
