#include <iostream>
#include "Triangle.h"

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