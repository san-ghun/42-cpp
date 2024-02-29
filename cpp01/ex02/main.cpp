#include <iostream>
#include <string>

int	main( void )
{
	std::string	str = "HI THIS IS BRAIN";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << "[[ memory address ]]" << "\n";
	std::cout << "\tof the string variable: " << &str << "\n";
	std::cout << "\theld by stringPTR: " << &stringPTR << "\n";
	std::cout << "\theld by stringREF: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "[[ value ]]" << "\n";
	std::cout << "\tof the string variable: " << str << "\n";
	std::cout << "\tpointed to by stringPTR: " << *stringPTR << "\n";
	std::cout << "\tpointed to by stringREF: " << stringREF << std::endl;

	return (EXIT_SUCCESS);
}