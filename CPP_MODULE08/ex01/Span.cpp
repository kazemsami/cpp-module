#include "Span.hpp"

Span::Span(unsigned int max_sz) : max_sz(max_sz)
{
}

Span::~Span()
{
}

Span::Span(const Span& span)
{
	if (this != &span)
	{
		this->vec = span.vec;
		this->max_sz = span.max_sz;
	}
}

Span& Span::operator=(const Span& span)
{
	if (this != &span)
	{
		this->vec = span.vec;
		this->max_sz = span.max_sz;
	}
	return (*this);
}

void Span::addNumber(int num)
{
	if (this->vec.size() >= this->max_sz)
		throw MaxElementsReached("Couldn't add more elements max elements reached");
	this->vec.push_back(num);
}

int	Span::shortestSpan()
{
	if (this->vec.size() <= 1)
		throw NoSpanFound("Vector is empty or has only one element can't find span");
	int	shortest = 2147483647;
	for (std::vector<int>::iterator it = this->vec.begin(); it != vec.end(); it++)
	{
		for (std::vector<int>::iterator it2 = this->vec.begin(); it2 != vec.end(); it2++)
		{
			if (it2 != it && std::abs(*it - *it2) < shortest)
				shortest = std::abs(*it - *it2);
		}
	}
	return (shortest);
}

int	Span::longestSpan()
{
	if (this->vec.size() <= 1)
		throw NoSpanFound("Vector is empty or has only one element can't find span");
	int	longest = 0;
	for (std::vector<int>::iterator it = this->vec.begin(); it != vec.end(); it++)
	{
		for (std::vector<int>::iterator it2 = this->vec.begin(); it2 != vec.end(); it2++)
		{
			if (it2 != it && std::abs(*it - *it2) > longest)
				longest = std::abs(*it - *it2);
		}
	}
	return (longest);
}

void Span::addMultiple(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for (std::vector<int>::iterator it = begin; it != end; ++it)
	{
		if (this->vec.size() >= this->max_sz)
			throw MaxElementsReached("Couldn't add more elements max elements reached");
		this->vec.push_back(*it);
	}
}

Span::MaxElementsReached::MaxElementsReached(const std::string& msg) : _msg(msg)
{
}

const char* Span::MaxElementsReached::what() const throw()
{
	return (_msg.c_str());
}

Span::MaxElementsReached::~MaxElementsReached() throw()
{
}

Span::NoSpanFound::NoSpanFound(const std::string& msg) : _msg(msg)
{
}

Span::NoSpanFound::~NoSpanFound() throw()
{
}

const char* Span::NoSpanFound::what() const throw()
{
	return (_msg.c_str());
}
