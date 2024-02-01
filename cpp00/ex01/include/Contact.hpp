#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <string>
#include <iomanip>

/// macro
# define MAX_CONTACT 8
# define FIELD_WIDTH 10

typedef enum e_field {
	FirstName,
	LastName,
	Nickname,
	PhoneNumber,
	DarkestSecret,
	Invalid,
}	t_field;

class Contact
{
private:
	int			_index;
	std::string	_first_name;
	std::string	_last_name;
	std::string	_nickname;
	std::string	_phone_number;
	std::string	_darkest_secret;

	std::string	_abbreviated(const std::string &field) const;
public:
	Contact();
	~Contact();

	bool	setField(t_field field, const std::string &value);
	bool	setIndex(int index);

	void	displayOverview(void);
	void	displayOne(void);
};

#endif
