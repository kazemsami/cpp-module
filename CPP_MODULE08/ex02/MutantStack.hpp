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
	typedef typename std::deque<T>::iterator iterator;
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