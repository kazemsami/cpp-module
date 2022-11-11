#include "Data.hpp"
#include <iostream>

int main()
{
	Data *data = new Data;
	data->data = 5;
	std::cout << data << std::endl;
	std::cout << data->data << std::endl;
	uintptr_t raw = serialize(data);
	Data *check = deserialize(raw);
	std::cout << check << std::endl;
	std::cout << check->data << std::endl;
	delete(data);
}