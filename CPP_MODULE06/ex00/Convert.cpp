#include "Convert.hpp"

Convert::Convert() : str("")
{
}

Convert::Convert(std::string str) : str(str)
{
}

Convert::~Convert()
{
}

Convert::Convert(const Convert& convert)
{
	if (this != &convert)
	{
		this->str = convert.str;
	}
}

Convert& Convert::operator=(const Convert& convert)
{
	if (this != &convert)
	{
		this->str = convert.str;
	}
	return (*this);
}

std::string Convert::getString() const
{
	return (this->str);
}

std::ostream& operator<<(std::ostream& os, const Convert& convert)
{
	std::string str = convert.getString();
	bool isFloat = false;
	bool isInteger = false;
	bool isChar = false;
	bool isDouble = false;
	bool charIsImpossible = false;
	bool intIsImpossible = false;
	bool floatIsImpossible = false;
	bool doubleIsImpossible = false;
	if (str == "nan" || str == "-nan" || str == "inf" || str == "-inf")
	{
		charIsImpossible = true;
		intIsImpossible = true;
		isFloat = true;
	}
	else
	{
		for (size_t i = str[0] == '-' ? 1 : 0; i < str.size(); i++)
		{
			if (isdigit(str[i]) || str[i] == '.')
			{
				if (str[i - 1] == '.')
				{
					while (isdigit(str[i]))
						++i;
					if (str[i] == 'f')
						isFloat = true;
				}
			}
			else
			{
				break;
			}
		}
		if (!isFloat)
		{
			for (size_t i = str[0] == '-' ? 1 : 0; i < str.size(); i++)
			{
				if (isdigit(str[i]) || str[i] == '.')
				{
					if (str[i - 1] == '.')
						isDouble = true;
				}
				else
				{
					break;
				}
			}
		}
		if ((isdigit(str[0]) || (str[0] == '-' && isdigit(str[1]))) && !isFloat && !isDouble)
			isInteger = true;
		else if (!isdigit(str[0]) && str.size() == 1)
			isChar = true;
	}
	float float_num;
	long integer;
	char c;
	double double_num;
	if (isChar)
	{
		c = str[0];
		integer = static_cast<int>(c);
		float_num = static_cast<float>(c);
		double_num = static_cast<double>(c);
	}
	else if (isDouble)
	{
		char *pEnd;
		double_num = strtod(str.c_str(), &pEnd);
		integer = static_cast<long>(double_num);
		if (integer < -2147483648 || integer > 2147483647)
		{
			intIsImpossible = true;
		}
		float_num = static_cast<float>(double_num);
		c = static_cast<char>(double_num);
		if (integer < 0 || integer > 255)
		{
			charIsImpossible = true;
		}
	}
	else if (isFloat)
	{
		char *pEnd;
		float_num = strtof(str.c_str(), &pEnd);
		integer = static_cast<long>(float_num);
		if (integer < -2147483648 || integer > 2147483647)
		{
			intIsImpossible = true;
		}
		double_num = static_cast<double>(float_num);
		c = static_cast<char>(float_num);
		if (integer < 0 || integer > 255)
		{
			charIsImpossible = true;
		}
	}
	else if (isInteger)
	{
		char *pEnd;
		integer = strtol(str.c_str(), &pEnd, 10);
		if (integer < -2147483648 || integer > 2147483647)
		{
			floatIsImpossible = true;
			doubleIsImpossible = true;
			intIsImpossible = true;
		}
		float_num = static_cast<float>(integer);
		double_num = static_cast<double>(integer);
		c = static_cast<char>(integer);
		if (integer < 0 || integer > 255)
		{
			charIsImpossible = true;
		}
	}
	else
	{
		charIsImpossible = true;
		intIsImpossible = true;
		floatIsImpossible = true;
		doubleIsImpossible = true;
	}

	os << "char: ";
	if (charIsImpossible)
	{
		os << "impossible" << std::endl;
	}
	else if (!isprint(c))
	{
		os << "Non displayable" << std::endl;
	}
	else
	{
		os << "'" << c << "'" << std::endl;
	}

	os << "int: ";
	if (intIsImpossible)
	{
		os << "impossible" << std::endl;
	}
	else
	{
		os << integer << std::endl;
	}
	os << "float: ";
	if (!floatIsImpossible)
	{
		os << float_num;
		if (float_num - (float)integer == 0 && integer < 1000000 && integer > -1000000 && !std::isnan(float_num))
		{
			os << ".0";
		}
		os << "f" << std::endl;
	}
	else {
		os << "impossible" << std::endl;
	}

	os << "double: ";
	if (!doubleIsImpossible)
	{
		os << double_num;
		if (double_num - (double)integer == 0 && integer < 1000000 && integer > -1000000 && !std::isnan(double_num))
		{
			os << ".0";
		}
	}
	else
	{
		os << "impossible";
	}
	return (os);
}