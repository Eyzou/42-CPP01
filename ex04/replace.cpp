//
// Created by eyza on 01/07/24.
//

#include "replace.h"

Replace::Replace(std::string filename)
{
    this->filename = filename;
}

Replace::~Replace()
{
}


void Replace::replaceFileContent(std::string s1, std::string s2)
{
    std::ifstream inFile(this->filename.c_str());
    std::ofstream outFile((this->filename + ".replace").c_str());
    size_t pos = 0;

    if(inFile.is_open() && outFile.is_open())
    {
        std::string line;
        while(getline(inFile, line))
        {
            while((pos = line.find(s1)) != std::string::npos)
            {
                line.erase(pos, s1.length());
                line.insert(pos, s2);
                pos += s2.length();
            }
            outFile << line << std::endl;
        }
        inFile.close();
        outFile.close();
    }
    else
    {
        std::cout << "Error" << std::endl;
    }
}