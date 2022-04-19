#include <iostream>
#include <string>

int	main(int argc, char **argv)
{
	int	i;
	std::string str;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	i = 1;
	str = "";
	while (i < argc)
	{
		std::string tmp(argv[i]);
		str += tmp;
		++i;
	}
	for (size_t z = 0; z < str.size(); z++)
	{
		if (str[z] >= 'a' && str[z] <= 'z')
			str[z] = std::toupper(str[z]);
	}
	std::cout << str << std::endl;
	return (0);
}