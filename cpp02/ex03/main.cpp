#include "Point.hpp"

int main(void) {
	/// case 1
	// Point	a(0.0, 0.0);
	// Point	b(0.0, 3.0);
	// Point	c(3.0, 0.0);

	/// case 2
	Point	a(0.0, 0.0);
	Point	b(2.0, 2.0);
	Point	c(4.0, 0.0);

	Point	t0(1.0, 1.0);
	Point	t1(2.0, 1.0);
	Point	t2(2.0, 2.0);

	std::cout << "t0 is " << (bsp(a, b, c, t0) ? "inside" : "outside") << "\n";
	std::cout << "t1 is " << (bsp(a, b, c, t1) ? "inside" : "outside") << "\n";
	std::cout << "t2 is " << (bsp(a, b, c, t2) ? "inside" : "outside") << std::endl;
	return (0);
}