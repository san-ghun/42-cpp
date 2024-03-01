#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

// Implement a Weapon class that has:
// • A private attribute type, which is a string.
// • A getType() member function that returns a const reference to type.
// • A setType() member function that sets type using the new one passed as parameter.

class Weapon
{
private:
	std::string	_type;

public:
	Weapon(std::string type);
	~Weapon(void);

	std::string	getType(void) const;
	void		setType(std::string new_type);

};

#endif