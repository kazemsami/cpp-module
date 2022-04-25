#include "Manipulation.hpp"

Manipulation::Manipulation(std::string fileName, std::string strToReplace, std::string replacedStr) :
fileName(fileName), strToReplace(strToReplace), replacedStr(replacedStr)
{
	std::ifstream file(fileName.c_str(), std::ios::in);
	if (file.fail())
	{
		std::cerr << "Input file does not exist." << std::endl;
		this->fileCont = "";
	}
	else
	{
		std::ostringstream ss;
		ss << file.rdbuf();
		this->fileCont = ss.str();
	}
}

Manipulation::~Manipulation()
{
}

void Manipulation::replace()
{
	size_t tmp = 0;

	if (this->strToReplace != this->replacedStr && !this->strToReplace.empty())
	{
		while ((tmp = this->fileCont.find(strToReplace)) != std::string::npos)
		{
			this->fileCont.erase(tmp, strToReplace.length());
			this->fileCont.insert(tmp, replacedStr);
		}
	}
}

void Manipulation::AddToFile()
{
	std::string tmp = this->fileName + ".replace";
	std::ofstream file(tmp.c_str(), std::ios::out | std::ios::trunc);
	file.write(this->fileCont.c_str(), sizeof(char)*this->fileCont.size());
	file.close();
}

const std::string Manipulation::getFileCont() const
{
	return (this->fileCont);
}