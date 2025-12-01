#include "Replacer.hpp"

Replacer::Replacer(std::string fileName, std::string s1, std::string s2)
    : fileName(fileName), toFind(s1), toReplace(s2)
{
    //std::cout << "hola constructor" << std::endl;
}

Replacer::~Replacer()
{
    //std::cout << "adios constructor" << std::endl;
}

void Replacer::setOutputFileName(std::string extension)
{
    this->outputFile = this->fileName + extension;
}

std::string Replacer::getFileName()
{
    return (this->fileName);
}

std::string	Replacer::getToFind()
{
    return (this->toFind);
}

std::string	Replacer::getToReplace()
{
    return (this->toReplace);
}

std::string	Replacer::getOutputFile()
{
    return (this->outputFile);
}
void Replacer::replaceContent(std::string &line)
{
    size_t start = 0;
    while (start != std::string::npos)
    {
        start = line.find(this->toFind, start);
        if (start != std::string::npos)
        {
            line.erase(start, this->toFind.length());
            line.insert(start, this->toReplace);
            start += this->toReplace.length();
        }
    }
    
}

void Replacer::makeOutfile()
{
    setOutputFileName(".replace");
    std::ifstream   infile;
    infile.open(this->getFileName().c_str());
    if (!infile)
    {
        std::cout << this->getOutputFile() << std::endl;
        std::cerr << RED << "Failed to read file" << RESET << std::endl;
        exit (-1);
    }
    std::ofstream outfile(this->outputFile.c_str());
    std::string line;
    while (std::getline(infile, line))
    {
        replaceContent(line);
        outfile << line;
        if (!infile.eof())
            outfile << std::endl;
    }
    infile.close();
    outfile.close();
}