#ifndef MANIPULATION_HPP
#define MANIPULATION_HPP

#include <string>
#include <iostream>
#include <fstream>
#include <sstream>
#include <stdexcept>

class Manipulation
{
private:
	std::string fileName;
	std::string strToReplace;
	std::string replacedStr;
	std::string fileCont;
public:
	Manipulation();
	Manipulation(std::string fileName, std::string strToReplace, std::string replacedStr);
	~Manipulation();
	void replace();
	const std::string getFileCont() const;
	void AddToFile();
};

#endif