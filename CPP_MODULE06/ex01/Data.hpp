#ifndef DATA_HPP
#define DATA_HPP

#include <stdint.h>

class Data
{
private:
	int	data;
public:
	Data();
	~Data();
	Data(const Data& data);
	Data& operator=(const Data& data);
	int getData() const;
	void setData(int data);
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif