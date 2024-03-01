#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl	harl;

	if (argc != 2)
		std::cout << "usage: ./Harl_filter [DEBUG / INFO / WARNING / ERROR]" << std::endl;
	else
		harl.filtered(std::string(argv[1]));

	return (EXIT_SUCCESS);
}
