#include "Data.hpp"

Data::Data() : data(0)
{
}

Data::~Data()
{
}

Data::Data(const Data& Data)
{
	if (this != &Data)
	{
		this->data = Data.data;
	}
}

Data& Data::operator=(const Data& Data)
{
	if (this != &Data)
	{
		this->data = Data.data;
	}
	return (*this);
}

int Data::getData() const
{
	return (this->data);
}

void Data::setData(int data)
{
	this->data = data;
}

uintptr_t serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
Data* deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}