#include "Point.hpp"

// TODO: Have to find out how to resolve operation
static Fixed	sign(Point const p1, Point const p2, Point const p3)
{
	return ( ( p1.getX() - p3.getX() ) * ( p2.getY() - p3.getY() ) - ( p2.getX() - p3.getX() ) * ( p1.getY() - p3.getY() ) );
}

/// @brief Indicate whether a point is inside of a triangle or not.
/// @param a A vertice of the beloved triangle.
/// @param b Another vertice of the beloved triangle.
/// @param c One last verice of the beloved trinagle.
/// @param point The point to check.
/// @return `True` if the point is inside the triangle. `False` otherwise.
///			Thus, if the point is a vertex or on edge, it will return `False`.
bool	bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	d1 = sign(point, a, b);
	Fixed	d2 = sign(point, b, c);
	Fixed	d3 = sign(point, c, a);

	bool	hasNeg = (d1 < 0) || (d2 < 0) || (d3 < 0);
	bool	hasPos = (d1 > 0) || (d2 > 0) || (d3 > 0);
	bool	hasZero = (d1 == 0) || (d2 == 0) || (d3 == 0);

	int	res = static_cast<int>(hasNeg) + static_cast<int>(hasPos) + static_cast<int>(hasZero);

	return (res == 1);
}
