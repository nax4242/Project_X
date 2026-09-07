#include "Triangle.h"

Triangle::Triangle(double side, double height) {

	if (side <= 0) {
		throw std::invalid_argument("Invalid side length. Must be positive number.");
	}

	if (height <= 0) {
		throw std::invalid_argument("Invalid height length. Must be positive number.");
	}

	_side = side;
	_height = height;
}