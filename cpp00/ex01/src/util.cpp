#include "../include/PhoneBook.hpp"
// #include "PhoneBook.hpp"

bool	isPhoneNumber(char c)
{
	return (isdigit(c) || c == '-' || c == '+');
}

bool	validateString(const std::string &s, f_valid validator)
{
	if (isspace(*std::begin(s)))
		return (false);
	for (char c : s)
	{
		if (validator(c) != true)
			return (false);
	}
	return (true);
}