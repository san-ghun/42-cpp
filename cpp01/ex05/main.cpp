#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl	harl;

	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");

	return (EXIT_SUCCESS);
}
