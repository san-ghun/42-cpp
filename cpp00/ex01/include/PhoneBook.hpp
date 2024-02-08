#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

typedef bool	(*f_valid)(char c);

bool  isNumber(char c);
bool	isPhoneNumber(char c);
bool	validateString(const std::string &s, f_valid validator);

class PhoneBook
{
private:
	int		_count;
	int		_index;
	Contact	_new_contact;
	Contact	_contacts[MAX_CONTACT];

	bool	_createContact(int count);
	bool	_promptInput(const std::string &fieldname, t_field field, f_valid validator);
  int   _getTargetIndex(void);
  bool  _isValidIndex(std::string &input, int &index);

public:
	PhoneBook();
	~PhoneBook();

	void	addContact(void);
	void	searchContact(void);
};

#endif
