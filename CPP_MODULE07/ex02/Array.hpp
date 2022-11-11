#ifndef ITER_HPP
#define ITER_HPP

#include <string>
#include <iostream>

template <class T>
class Array
{
private:
	T *arr;
	unsigned int sz;
public:
	Array() : arr(new T[0]), sz(0) {}
	Array(unsigned int size) : arr(new T[size]), sz(size)
	{
	}
	Array(const Array& array)
	{
		if (this != &array)
		{
			this->arr = new T[array.sz];
			for (unsigned int i = 0; i < array.sz; ++i)
				this->arr[i] = array.arr[i];
			this->sz = array.sz;
		}
	}
	T& operator[] (int index)
	{
		if (index >= (int)this->sz || index < 0)
			throw std::out_of_range("Trying to access wrong index");
		return (this->arr[index]);
	}
	const T& operator[] (int index) const
	{
		if (index >= (int)this->sz || index < 0)
			throw std::out_of_range("Trying to access wrong index");
		return (this->arr[index]);
	}
	Array& operator=(const Array& array)
	{
		if (this != &array)
		{
			delete [] this->arr;
			this->arr = new T[array.sz];
			for (unsigned int i = 0; i < array.sz; ++i)
				this->arr[i] = array.arr[i];
			this->sz = array.sz;
		}
		return (*this);
	}
	~Array() { delete [] arr; };
	unsigned int size() const
	{
		return (this->sz);
	}
};

#endif