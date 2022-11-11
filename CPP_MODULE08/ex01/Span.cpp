#include "Span.hpp"

Span::Span() : max_sz(0)
{
}

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
	std::vector<int> tmp(this->vec);
	std::sort(tmp.begin(), tmp.end());
	int shortest = tmp[1] - tmp[0];
	for (std::vector<int>::iterator it = tmp.begin() + 2; it != tmp.end(); ++it)
		shortest = std::min(shortest, *it - *(it - 1));
	return (shortest);
}

int	Span::longestSpan()
{
	if (this->vec.size() <= 1)
		throw NoSpanFound("Vector is empty or has only one element can't find span");
	std::vector<int> tmp(this->vec);
	std::sort(tmp.begin(), tmp.end());
	return (tmp[tmp.size() - 1] - tmp[0]);
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
