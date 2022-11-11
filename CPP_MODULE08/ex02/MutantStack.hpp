#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>
#include <stack>
#include <deque>

template <class T>
class MutantStack : public std::stack<T>
{
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() {};
	~MutantStack() {};
	iterator begin()
	{
		return (this->c.begin());
	}
	iterator end()
	{
		return (this->c.end());
	}
};

#endif
