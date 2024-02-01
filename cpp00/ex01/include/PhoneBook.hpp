#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"

class PhoneBook
{
private:
	int		_count;
	Contact	_new_contact;
	Contact	_contacts[MAX_CONTACT];

public:
	PhoneBook();
	~PhoneBook();

	void	addContact(void);
	void	searchContact(void);
};

#endif
