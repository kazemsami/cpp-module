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
	Array() : arr(new T[0]), sz(0) {};
	Array(unsigned int size) : arr(new T[size]), sz(size)
	{
		for (unsigned int i = 0; i < size; ++i)
		{
			arr[i] = 0;
		}
	};
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
	T& operator[] (unsigned int index)
	{
		if (index >= this->sz)
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