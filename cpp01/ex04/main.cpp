#include "Replace.hpp"

static bool	check_args(int ac, char *av[])
{
	if (ac != 4)
		return (false);
	if (std::string(av[1]).empty())
		return (false);
	if (std::string(av[2]).empty())
		return (false);
	return (true);
}

static int	error_args(int type)
{
	std::string	code;
	if (type)
		code = "string";
	else
		code = "filename";
	std::cerr << "error: incorrect " << code << "\n"
		<< "usage: ./Sed_is_for_losers <filename> <string 1> <string 2>"
		<< std::endl;
	return (EXIT_FAILURE);
}

int main(int argc, char *argv[])
{
	if (check_args(argc, argv) != true)
		return (error_args(1));

	std::string	filename(argv[1]);
	std::string	s1(argv[2]);
	std::string s2(argv[3]);
	std::string	buffer;

	Replace		re(filename, s1, s2);

	if (re.ifs.good() != true)
		return (error_args(0));

	re.ft_replace(buffer);
	return (EXIT_SUCCESS);
}
