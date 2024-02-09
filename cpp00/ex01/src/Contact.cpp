#include "../include/Contact.hpp"
// #include "Contact.hpp"

Contact::Contact() : _index(0) {}
Contact::~Contact() {}

std::string	Contact::_abbreviated(const std::string &field) const
{
	if (field.length() <= FIELD_WIDTH)
		return (field);
	else
		return (field.substr(0, FIELD_WIDTH - 1) + ".");
}

bool	Contact::setField(t_field field, const std::string &value)
{
	switch (field)
	{
	case FirstName:
		_first_name = value;
		break;
	case LastName:
		_last_name = value;
		break;
	case Nickname:
		_nickname = value;
		break;
	case PhoneNumber:
		_phone_number = value;
		break;
	case DarkestSecret:
		_darkest_secret = value;
		break;
	default:
		return (false);
	}
	return (true);
}

bool	Contact::setIndex(int index)
{
	if (index > MAX_CONTACT || index < 0)
		return (false);
	_index = index;
	return (true);
}

void	Contact::displayOverview(void)
{
	std::cout << "|" << std::setw(4) << std::left << _index + 1 << "|"
		<< std::setw(FIELD_WIDTH) << std::left << _abbreviated(_first_name) << "|"
		<< std::setw(FIELD_WIDTH) << std::left << _abbreviated(_last_name) << "|"
		<< std::setw(FIELD_WIDTH) << std::left << _abbreviated(_nickname) << "|"
		<< std::endl;
}

void	Contact::displayOne(void)
{
	std::cout << std::endl << "Index:\t\t[ " << _index + 1 << " ]" << std::endl;
	std::cout << "First name:\t" << _first_name << std::endl;
	std::cout << "Last name:\t" << _last_name << std::endl;
	std::cout << "Nickname:\t" << _nickname << std::endl;
	std::cout << "Phone number:\t" << _phone_number << std::endl;
	std::cout << "Darkest secret:\t" << _darkest_secret << std::endl << std::endl;
}
