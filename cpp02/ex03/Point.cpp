#include "Point.hpp"

Point::Point(void)
	: x(0), y(0) {}

Point::Point(const float left, const float right)
	: x(left), y(right) {}

Point::~Point(void)
{}

Point::Point(const Point& point)
{
	*this = point;
}

Point&	Point::operator=(const Point& point)
{
	if (this != &point)
	{
		const_cast<Fixed&>(x) = point.getX();
		const_cast<Fixed&>(y) = point.getY();
	}
	return (*this);
}


const Fixed&	Point::getX(void) const
{
	return (x);
}

const Fixed&	Point::getY(void) const
{
	return (y);
}


std::ostream& operator<<(std::ostream& out, const Point& point)
{
	return (out << "( " << point.getX().toFloat() << ", " << point.getY().toFloat() << " )");
}
