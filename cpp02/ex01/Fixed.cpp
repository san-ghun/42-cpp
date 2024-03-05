#include "Fixed.hpp"

Fixed::Fixed(void)
{
	_fixed_point = 0;
	std::cout << "Default constructor called" << std::endl;
}

// TODO:
Fixed::Fixed(const int value)
{
	_fixed_point = value << _frac_bits;
	std::cout << "Int constructor called" << std::endl;
}

// TODO:
Fixed::Fixed(const float value)
{
	_fixed_point = static_cast<int>(roundf(value * (1 << _frac_bits)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator=(const Fixed& fixed)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &fixed)
		_fixed_point = fixed.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (_fixed_point);
}

void	Fixed::setRawBits(const int raw)
{
	_fixed_point = raw;
}

// TODO:
int		Fixed::toInt(void) const
{
	return (_fixed_point >> _frac_bits);
}

// TODO:
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

// TODO:
std::ostream& operator<<(std::ostream& out, const Fixed& fixed)
{
	return (out << fixed.toFloat());
}
