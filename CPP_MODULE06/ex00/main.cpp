#include "Convert.hpp"

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		Convert convert(argv[1]);
		std::cout << convert << std::endl;
	}
	else {
		std::cout << "Wrong number of arguments" << std::endl;
	}
	return (0);
}