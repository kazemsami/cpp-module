#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>
#include <iomanip>
#include <cmath>

class Convert
{
private:
	std::string str;
public:
	Convert();
	Convert(std::string str);
	~Convert();
	Convert(const Convert& bureaucrat);
	Convert& operator=(const Convert& bureaucrat);
	std::string getString() const;
};

std::ostream& operator<<(std::ostream& os, const Convert& convert);

#endif