#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

/*
the class Point in Orthodox Canonical Form that represents a 2D point:
• Private members:
	◦ A Fixed const attribute x.
	◦ A Fixed const attribute y.
	◦ Anything else useful.
• Public members:
	◦ A default constructor that initializes x and y to 0.
	◦ A constructor that takes as parameters two constant floating-point numbers.
		It initializes x and y with those parameters.
	◦ A copy constructor.
	◦ A copy assignment operator overload.
	◦ A destructor.
	◦ Anything else useful.
*/

class Point
{
private:
	const Fixed	x;
	const Fixed	y;

public:
	Point(void);
	Point(const float left, const float right);
	Point(const Point& point);
	~Point(void);

	Point&	operator=(const Point& point);

	const Fixed&	getX(void) const;
	const Fixed&	getY(void) const;

};

bool	bsp( Point const a, Point const b, Point const c, Point const point);

#endif
