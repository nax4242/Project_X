#include <iostream>

class Triangle {
	double _side;
	double _height;

public:
	Triangle(double side = 1, double height = 1) {
		_side = side;
		_height = height;
	}

	double calculate_area() const noexcept {
		return _side * _height / 2;
	}

	double get_side() const noexcept {
		return _side;
	}

	double get_height() const noexcept {
		return _height;
	}

	void set_side(double side) {
		if (side <= 0) {
			throw std::logic_error("Invalid side length. Must be positive number.");
		}

		_side = side;
	}

	void set_height(double height) {
		if (height <= 0) {
			throw std::logic_error("Invalid height length. Must be positive number.");
		}

		_height = height;
	}
};


int main() {
	double first_side, height, area_of_triangle;

	std::cout << "Enter first side of triangle: ";
	std::cin >> first_side;

	while (first_side <= 0) {
		std::cout << "Incorrect input. Side length must be positive number." << std::endl;
		std::cout << "Enter first side of triangle: ";

		std::cin >> first_side;
	}

	std::cout << "Enter height of triangle: ";
	std::cin >> height;

	while (height <= 0) {
		std::cout << "Incorrect input. Height length must be positive number." << std::endl;
		std::cout << "Enter first side of triangle: ";

		std::cin >> height;
	}

	Triangle triangle(first_side, height);
	std::cout << "Area of triangle equals " << triangle.calculate_area() << std::endl;

	return 0;
}