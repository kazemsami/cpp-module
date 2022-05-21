#include "Data.hpp"
#include <iostream>

int main()
{
	Data *data = new Data;
	std::cout << data << std::endl;
	data->setData(5);
	uintptr_t raw = serialize(data);
	Data *check = deserialize(raw);
	std::cout << check << std::endl;
	std::cout << check->getData() << std::endl;
	delete(data);
}