#include "Manipulation.hpp"

int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}
	Manipulation mani(argv[1], argv[2], argv[3]);
	if (mani.getFileCont().empty())
		return (1);
	mani.replace();
	mani.AddToFile();
	return (0);
}