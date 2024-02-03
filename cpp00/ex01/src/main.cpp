#include "../include/PhoneBook.hpp"
// #include "PhoneBook.hpp"

static void	showPrompt(void)
{
	std::cout << "> Enter one of following command: " << std::endl;
	std::cout << "	1) ADD		- to add new contact" << std::endl;
	std::cout << "	2) SEARCH	- to search for a contact" << std::endl;
	std::cout << "	3) EXIT		- to exit the phone book" << std::endl;
}

int	main(void)
{
	PhoneBook   pb;
	std::string cmd;

	while(showPrompt(), std::cout << "> ", getline(std::cin, cmd))
	{
		if (cmd == "ADD")
			pb.addContact();
		else if (cmd == "SEARCH")
			pb.searchContact();
		else if (cmd == "EXIT")
			break ;
		else
			std::cerr << "[WARNING] unrecognized command: " << cmd << std::endl;
	}
	std::cout << "--- exit the program." << std::endl;
	return (EXIT_SUCCESS);
}