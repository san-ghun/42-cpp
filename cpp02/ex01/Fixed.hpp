#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

// for testing
#include <cstdio>
/*
Add the following public constructors and public member functions to your class:
	• A constructor that takes a constant integer as a parameter.
		It converts it to the corresponding fixed-point value. The fractional bits value is
		initialized to 8 like in exercise 00.
	• A constructor that takes a constant floating-point number as a parameter.
		It converts it to the corresponding fixed-point value. The fractional bits value is
		initialized to 8 like in exercise 00.
	• A member function float toFloat( void ) const;
		that converts the fixed-point value to a floating-point value.
	• A member function int toInt( void ) const;
		that converts the fixed-point value to an integer value.
*/

class Fixed
{
private:
	int					_fixed_point;
	static const int	_frac_bits = 8;

public:
	Fixed(void);
	Fixed(const int value);
	Fixed(const float value);
	Fixed(const Fixed& fixed);
	~Fixed(void);
	Fixed& operator=(const Fixed& fixed);

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );

	int		toInt(void) const;
	float	toFloat(void) const;

	// for testing
	void	printHex(void) const;
};


// Add the following function to the Fixed class files:
// • An overload of the insertion («) operator that 
//   inserts a floating-point representation
//   of the fixed-point number into the 
//   output stream object passed as parameter.
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
