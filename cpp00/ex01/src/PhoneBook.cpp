#include "../include/PhoneBook.hpp"
// #include "PhoneBook.hpp"

PhoneBook::PhoneBook() : _count(0), _index(0) {}
PhoneBook::~PhoneBook() {}

bool	PhoneBook::_promptInput(const std::string &fieldname, t_field field, f_valid validator)
{
	std::string	input;

	while (true)
	{
		std::cout << "> Enter " << fieldname << ": ";
		getline(std::cin, input);
		if (input.empty())
		{
			std::cerr << "error: "<< fieldname << " cannot be empty. Please try again." << std::endl;
			continue ;
		}
		if (validator == NULL)
			break;
		if (validateString(input, validator))
			break;
		std::cerr << "error: invalid " << fieldname << ". Please try again." << std::endl;
	}
	if (_new_contact.setField(field, input) != true)
	{
		std::cerr << "error: failed to set " << fieldname << ". Please try again." << std::endl;
		return (false);
	}
	return (true);
}

bool	PhoneBook::_createContact(int count)
{
	return (_new_contact.setIndex(count) &&
			_promptInput("First name", FirstName, nullptr) &&
			_promptInput("Last name", LastName, nullptr) &&
			_promptInput("Nickname", Nickname, nullptr) &&
			_promptInput("Phone number", PhoneNumber, isPhoneNumber) &&
			_promptInput("Darkest secret", DarkestSecret, nullptr));
}

void	PhoneBook::addContact(void)
{
	if (_createContact(_index))
	{
		_contacts[_index] = _new_contact;
		_index++;
		_index %= MAX_CONTACT;
		if (_count < MAX_CONTACT)
			_count++;
		std::cout << "[Success] added new contact to the phonebook." << std::endl;
	}
	else
		std::cerr << "[Fail] failed to create new contact. Try again." << std::endl;
}

void	PhoneBook::searchContact(void)
{
	while (true)
	{
		if (_count == 0)
		{
			std::cout << "--------------- SEARCH ---------------" << std::endl;
			std::cout << "---       phonebook is empty.      ---" << std::endl;
			std::cout << "--------------------------------------" << std::endl;
			break;
		}
		std::cout << "--------------- SEARCH ---------------" << std::endl;
		std::cout << "|IDX |FirstName |LastName  |Nickname  |" << std::endl;
		for (int n = 0; n < _count; n++)
			_contacts[n].displayOverview();
		std::cout << "--------------------------------------" << std::endl;

		//TODO:
		_contacts[0].displayOne();
	}
}