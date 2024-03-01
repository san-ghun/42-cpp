#include "Replace.hpp"

Replace::Replace(std::string filename, std::string s1, std::string s2)
{
	_filein = filename;
	_fileout = filename + ".replace";

	str1 = s1;
	str2 = s2;
	ifs = std::ifstream(_filein, std::ifstream::in);
	if (ifs.good())
		ofs = std::ofstream(_fileout, std::ofstream::out);
}

Replace::~Replace(void)
{
	if (ifs.is_open())
		ifs.close();
	if (ofs.is_open())
		ofs.close();
}

void	Replace::ft_replace(std::string& buf)
{
	size_t	pos;

	std::getline(ifs, buf, '\0');
	pos = buf.find(str1);
	while (pos != std::string::npos)
	{
		buf.erase(pos, str1.size());
		buf.insert(pos, str2);
		pos = buf.find(str1);
	}
	ofs << buf;
}