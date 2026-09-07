#pragma once
#include <iostream>

class Triangle {
	double _side;
	double _height;

public:
	Triangle(double side = 1, double height = 1);


	inline double get_side() const noexcept;

	inline double get_height() const noexcept;

	inline void set_side(double side);

	inline void set_height(double height);


	inline double calculate_area() const noexcept;
};

inline double Triangle::calculate_area() const noexcept {
	return _side * _height / 2;
}

inline double Triangle::get_side() const noexcept {
	return _side;
}

inline double Triangle::get_height() const noexcept {
	return _height;
}

inline void Triangle::set_side(double side) {

	if (side <= 0) {
		throw std::invalid_argument("Invalid side length. Must be positive number.");
	}

	_side = side;
}

inline void Triangle::set_height(double height) {

	if (height <= 0) {
		throw std::invalid_argument("Invalid height length. Must be positive number.");
	}

	_height = height;
}
