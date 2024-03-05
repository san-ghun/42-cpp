#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point = 0;
}

Fixed::Fixed(const int value)
{
	_fixed_point = value << _frac_bits;
}

Fixed::Fixed(const float value)
{
	_fixed_point = static_cast<int>(roundf(value * (1 << _frac_bits)));
}

Fixed::Fixed(const Fixed& fixed)
{
	*this = fixed;
}

Fixed::~Fixed(void)
{
}

// ------ operators ------

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	if (this != &fixed)
		_fixed_point = fixed.getRawBits();
	return (*this);
}

// TODO: 6 comparison operators
bool	Fixed::operator>(const Fixed& fixed)
{
	return (_fixed_point > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed& fixed)
{
	return (_fixed_point < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed& fixed)
{
	return (_fixed_point >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed& fixed)
{
	return (_fixed_point <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed& fixed)
{
	return (_fixed_point == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed& fixed)
{
	return (_fixed_point != fixed.getRawBits());
}

// TODO: 4 arithmetic operators
Fixed	Fixed::operator+(const Fixed& fixed)
{
	Fixed	temp(this->toFloat() + fixed.toFloat());
	return (temp);
}

Fixed	Fixed::operator-(const Fixed& fixed)
{
	Fixed	temp(this->toFloat() - fixed.toFloat());
	return (temp);
}

Fixed	Fixed::operator*(const Fixed& fixed)
{
	Fixed	temp(this->toFloat() * fixed.toFloat());
	return (temp);
}

Fixed	Fixed::operator/(const Fixed& fixed)
{
	Fixed	temp(this->toFloat() / fixed.toFloat());
	return (temp);
}

// TODO: 4 increment/decrement operators
Fixed&	Fixed::operator++(void)
{
	++_fixed_point;
	return (*this);
}

Fixed&	Fixed::operator--(void)
{
	--_fixed_point;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	temp = *this;
	_fixed_point++;
	return (temp);
}

Fixed	Fixed::operator--(int)
{
	Fixed	temp = *this;
	_fixed_point--;
	return (temp);
}


Fixed&			Fixed::min(Fixed& left, Fixed& right)
{
	if (left.getRawBits() < right.getRawBits())
		return (left);
	return (right);
}

Fixed&			Fixed::max(Fixed& left, Fixed& right)
{
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}

const Fixed&	Fixed::min(const Fixed& left, const Fixed& right)
{
	if (left.getRawBits() < right.getRawBits())
		return (left);
	return (right);
}

const Fixed&	Fixed::max(const Fixed& left, const Fixed& right)
{
	if (left.getRawBits() > right.getRawBits())
		return (left);
	return (right);
}


int		Fixed::getRawBits(void) const
{
	return (_fixed_point);
}

void	Fixed::setRawBits(const int raw)
{
	_fixed_point = raw;
}

int		Fixed::toInt(void) const
{
	return (_fixed_point >> _frac_bits);
}

float	Fixed::toFloat(void) const
{
	return (static_cast<float>(_fixed_point) / (1 << _frac_bits));
}

void	Fixed::printHex(void) const
{
	printf("bits: %x\n", this->getRawBits());
	printf("int: %x\n", this->toInt());
	printf("float: %f\n", this->toFloat());
}


std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}
