#include "../include/PhoneBook.hpp"
#include <cctype>
// #include "PhoneBook.hpp"

bool  isNumber(char c)
{
  return (isdigit(c) != 0);
}

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
