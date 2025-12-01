#ifndef	REPLACER_H
#define REPLACER_H


#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>



#define RED "\033[31m"
#define RESET "\033[0m"

class Replacer
{
private:
	std::string	fileName;
	std::string toFind;
	std::string toReplace;
	std::string outputFile;

public:
	Replacer(std::string fileName, std::string s1, std::string s2);
	~Replacer();
	void setOutputFileName(std::string extension);
	std::string	getFileName();
	std::string	getToFind();
	std::string	getToReplace();
	std::string	getOutputFile();
	void replaceContent(std::string &line);
	void makeOutfile();
};


#endif