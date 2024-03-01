#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <string>

class Replace
{
private:
    std::string     _filein;
    std::string     _fileout;

public:
    std::string     str1;
    std::string     str2;
    std::ifstream   ifs;
    std::ofstream   ofs;

    Replace(std::string filename, std::string s1, std::string s2);
    ~Replace(void);

    void    ft_replace(std::string& buf);

};

#endif
